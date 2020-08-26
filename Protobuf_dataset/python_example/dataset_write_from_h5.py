############################################################
# python3 dataset_write_from_h5.py ../dataset_targarien.h5 ../dataset_targarien.protobuf
# python3 dataset_write_from_h5.py ../dataset_golovan.h5 ../dataset_golovan.protobuf
############################################################

import face_dataset_pb2 as face_dataset
import sys
import h5py                                                                                                                                                                                   

# Main procedure:  Reads the entire address book from a file and prints all
#   the information inside.
if len(sys.argv) != 3:
  print("Usage:", sys.argv[0], "DATASET_FILE")
  sys.exit(-1)


dataset = face_dataset.DatasetObject()
tempDatasetArr = []

with h5py.File(sys.argv[1], 'r') as f:
    for person in f.keys():
        embedding_premade = f[person]['embedding'][:]

        # print("Name: " + person)
        # print("Embedding: " + str(embedding_premade))

        face = face_dataset.FaceObject()
        face.name = person
        face.embeddings.extend(embedding_premade) 

        tempDatasetArr.append(face)

dataset.faceobjects.extend(tempDatasetArr)


print(60*"=" + "Print Dataset")
print(dataset)
print(60*"=")

print(60*"=" + "Print Dataset as a String")
print(dataset.SerializeToString())
print(60*"=")


print(60*"=" + "Loop")
for descriptor in dataset.DESCRIPTOR.fields:
    extractedFaces = getattr(dataset, descriptor.name)
    for i in range(len(extractedFaces)): 
        print("\nFace: " + str(i) + " " + extractedFaces[i].name)
        print("Embedding: " + str(extractedFaces[i].embeddings[:3]))
print(60*"=")


# Write the new address book back to disk.
f = open(sys.argv[2], "wb")
f.write(dataset.SerializeToString())
f.close()