############################################################
# python3 dataset_read.py aaa.aaa
############################################################

import face_dataset_pb2
import sys

# Main procedure:  Reads the entire address book from a file and prints all
#   the information inside.
if len(sys.argv) != 2:
  print("Usage:", sys.argv[0], "DATASET_FILE")
  sys.exit(-1)

face_data = face_dataset_pb2.Face()

# Read the existing address book.
f = open(sys.argv[1], "rb")
face_data.ParseFromString(f.read())
f.close()


print(60*"=" + "Print Class")
print(face_data)
print(60*"=")

print(60*"=" + "Print As String")
print(face_data.SerializeToString())
print(60*"=")
