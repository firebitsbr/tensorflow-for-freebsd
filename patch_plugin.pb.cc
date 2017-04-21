--- bazel-tensorflow-20.04.2016/external/protobuf/src/google/protobuf/compiler/plugin.pb.cc	2017-03-07 22:22:57.000000000 +0000
+++ bazel-tensorflow-20.04.2016/external/protobuf/src/google/protobuf/compiler/plugin.pb.cc-from	2017-04-20 21:12:41.328871000 +0000
@@ -370,12 +370,12 @@
   // @@protoc_insertion_point(serialize_start:google.protobuf.compiler.Version)
   // optional int32 major = 1;
   if (has_major()) {
-    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->major(), output);
+    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->amajor(), output);
   }
 
   // optional int32 minor = 2;
   if (has_minor()) {
-    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->minor(), output);
+    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->aminor(), output);
   }
 
   // optional int32 patch = 3;
@@ -406,12 +406,12 @@
   // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.compiler.Version)
   // optional int32 major = 1;
   if (has_major()) {
-    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->major(), target);
+    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->amajor(), target);
   }
 
   // optional int32 minor = 2;
   if (has_minor()) {
-    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->minor(), target);
+    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->aminor(), target);
   }
 
   // optional int32 patch = 3;
@@ -459,14 +459,14 @@
     if (has_major()) {
       total_size += 1 +
         ::google::protobuf::internal::WireFormatLite::Int32Size(
-          this->major());
+          this->amajor());
     }
 
     // optional int32 minor = 2;
     if (has_minor()) {
       total_size += 1 +
         ::google::protobuf::internal::WireFormatLite::Int32Size(
-          this->minor());
+          this->aminor());
     }
 
     // optional int32 patch = 3;
@@ -509,10 +509,10 @@
       suffix_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.suffix_);
     }
     if (from.has_major()) {
-      set_major(from.major());
+      set_major(from.amajor());
     }
     if (from.has_minor()) {
-      set_minor(from.minor());
+      set_minor(from.aminor());
     }
     if (from.has_patch()) {
       set_patch(from.patch());
@@ -574,7 +574,7 @@
   major_ = 0;
   clear_has_major();
 }
-::google::protobuf::int32 Version::major() const {
+::google::protobuf::int32 Version::amajor() const {
   // @@protoc_insertion_point(field_get:google.protobuf.compiler.Version.major)
   return major_;
 }
@@ -598,7 +598,7 @@
   minor_ = 0;
   clear_has_minor();
 }
-::google::protobuf::int32 Version::minor() const {
+::google::protobuf::int32 Version::aminor() const {
   // @@protoc_insertion_point(field_get:google.protobuf.compiler.Version.minor)
   return minor_;
 }
