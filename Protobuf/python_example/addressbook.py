# https://developers.google.com/protocol-buffers/docs/pythontutorial
# Compiling Protocol Buffers

# protoc -I=$PWD --python_out=$PWD $PWD/addressbook.proto

# protoc -I=$PWD --cpp_out=$PWD $PWD/addressbook.proto


import addressbook_pb2
person = addressbook_pb2.Person()
person.id = 1234
person.name = "John Doe"
person.email = "jdoe@example.com"
phone = person.phones.add()
phone.number = "555-4321"
phone.type = addressbook_pb2.Person.HOME



# print(person.SerializeToString())

print("Print Class" + 60*"=")
print(person)
print(60*"=")

print("Print As String" + 60*"=")
print(person.SerializeToString())
print(60*"=")
