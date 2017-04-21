--- bazel-tensorflow-20.04.2016/external/protobuf/src/google/protobuf/compiler/plugin.pb.h	2017-03-07 22:22:57.000000000 +0000
+++ bazel-tensorflow-20.04.2016/external/protobuf/src/google/protobuf/compiler/plugin.pb.h-from	2017-04-20 21:10:24.098551000 +0000
@@ -235,14 +235,14 @@
   bool has_major() const;
   void clear_major();
   static const int kMajorFieldNumber = 1;
-  ::google::protobuf::int32 major() const;
+  ::google::protobuf::int32 amajor() const;
   void set_major(::google::protobuf::int32 value);
 
   // optional int32 minor = 2;
   bool has_minor() const;
   void clear_minor();
   static const int kMinorFieldNumber = 2;
-  ::google::protobuf::int32 minor() const;
+  ::google::protobuf::int32 aminor() const;
   void set_minor(::google::protobuf::int32 value);
 
   // optional int32 patch = 3;
@@ -702,7 +702,7 @@
   major_ = 0;
   clear_has_major();
 }
-inline ::google::protobuf::int32 Version::major() const {
+inline ::google::protobuf::int32 Version::amajor() const {
   // @@protoc_insertion_point(field_get:google.protobuf.compiler.Version.major)
   return major_;
 }
@@ -726,7 +726,7 @@
   minor_ = 0;
   clear_has_minor();
 }
-inline ::google::protobuf::int32 Version::minor() const {
+inline ::google::protobuf::int32 Version::aminor() const {
   // @@protoc_insertion_point(field_get:google.protobuf.compiler.Version.minor)
   return minor_;
 }
