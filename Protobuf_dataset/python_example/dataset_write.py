######## CREATE PROTO OBJECT ###############################
# protoc -I=$PWD --python_out=$PWD $PWD/face_dataset.proto
# protoc -I=$PWD --cpp_out=$PWD $PWD/face_dataset.proto
# protoc -I=$PWD --objc_out=$PWD $PWD/face_dataset.proto
# protoc -I=$PWD --java_out=$PWD $PWD/face_dataset.proto
############################################################

############################################################
# python3 dataset_write.py aaa.aaa
############################################################

import face_dataset_pb2
import sys

face_data = face_dataset_pb2.Face()
face_data.name = "Eugene"
face_data.embeddings.extend([0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9]) 

# print(face_data.SerializeToString())

print(60*"=" + "Print Class")
print(face_data)
print(60*"=")

print(60*"=" + "Print As String")
print(face_data.SerializeToString())
print(60*"=")


# Write the new address book back to disk.
f = open(sys.argv[1], "wb")
f.write(face_data.SerializeToString())
f.close()