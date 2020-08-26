############################################################
# python3 dataset_read.py aaa.protobuf
# python3 dataset_read.py ../dataset_targarien.protobuf
# python3 dataset_read.py ../dataset_golovan.protobuf
############################################################

import face_dataset_pb2 as face_dataset
import sys

# Main procedure:  Reads the entire address book from a file and prints all
#   the information inside.
if len(sys.argv) != 2:
  print("Usage:", sys.argv[0], "DATASET_FILE")
  sys.exit(-1)

dataset = face_dataset.DatasetObject()

# Read the existing address book.
f = open(sys.argv[1], "rb")
dataset.ParseFromString(f.read())
f.close()


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
        print("Embedding: " + str(extractedFaces[i].embeddings))
print(60*"=")
