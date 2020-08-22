############################################################
# python3 dataset_write_from_h5.py ../dataset_targarien.h5 ../dataset_targarien.proto
############################################################

import face_dataset_pb2
import sys
import h5py                                                                                                                                                                                   

# Main procedure:  Reads the entire address book from a file and prints all
#   the information inside.
if len(sys.argv) != 3:
  print("Usage:", sys.argv[0], "DATASET_FILE")
  sys.exit(-1)


with h5py.File(sys.argv[1], 'r') as f:
    for person in f.keys():
        embedding_premade = f[person]['embedding'][:]

        print("Name: " + person)
        print("Embedding: " + str(embedding_premade))
