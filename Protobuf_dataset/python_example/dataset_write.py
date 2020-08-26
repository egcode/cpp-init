######## CREATE PROTO OBJECT ###############################
# protoc -I=$PWD --python_out=$PWD $PWD/face_dataset.proto
# protoc -I=$PWD --cpp_out=$PWD $PWD/face_dataset.proto
# protoc -I=$PWD --objc_out=$PWD $PWD/face_dataset.proto
# protoc -I=$PWD --java_out=$PWD $PWD/face_dataset.proto
############################################################

############################################################
# python3 dataset_write.py aaa.protobuf
############################################################

import face_dataset_pb2 as face_dataset
import sys

face1 = face_dataset.FaceObject()
face1.name = "Eugene"
face1.embeddings.extend([0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9]) 


face2 = face_dataset.FaceObject()
face2.name = "Alex"
face2.embeddings.extend([0.21, 0.22, 0.23, 0.24, 0.25, 0.26, 0.27, 0.28, 0.29]) 

face3 = face_dataset.FaceObject()
face3.name = "Jul"
face3.embeddings.extend([0.31, 0.32, 0.33, 0.34, 0.35, 0.36, 0.37, 0.38, 0.39]) 


dataset = face_dataset.DatasetObject()
dataset.faceobjects.extend([face1, face2, face3])

# print(face_data.SerializeToString())

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


# Write the new address book back to disk.
f = open(sys.argv[1], "wb")
f.write(dataset.SerializeToString())
f.close()