code-base
=======
Building
--------

### Dependencies

* [Bazel](https://bazel.build/): for generating compilation targets.

### Build steps

#### 1) Install Bazel build tool

  * How to [install Bazel](http://bazel.build/docs/install.html)
  * How to [get started using Bazel](http://bazel.build/docs/getting-started.html)
  * The Bazel command line is documented in the  [user manual](http://bazel.build/docs/bazel-user-manual.html)
  * The rule reference documentation is in the [build encyclopedia](http://bazel.build/docs/be/overview.html)
  * How to [use the query command](http://bazel.build/docs/query.html)
  * How to [extend Bazel](http://bazel.build/docs/skylark/index.html)
  * The test environment is described on the page [writing tests](http://bazel.build/docs/test-encyclopedia.html)

#### 2) Check-Out this project 

```bash
# If using SSH
git clone git@github.com:npuichigo/code-base.git
# Or if using HTTPS
git clone https://github.com/npuichigo/code-base.git
```

#### 3) Build with bazel

```bash
bazel build examples/test_gflags:test_gflags_main
bazel build examples/test_glog:test_glog_main
bazel build examples/test_gtest:test_gtest_main
```

#### 4) Run executable files

```bash
./bazel-bin/examples/test_gflags/test_gflags_main
./bazel-bin/examples/test_glog/test_glog_main
./bazel-bin/examples/test_gtest/test_gtest_main
```
