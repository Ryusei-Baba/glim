#pragma once

#include <memory>
#include <thread>

namespace glim {

class StandardViewer {
public:
  StandardViewer();
  ~StandardViewer();

  bool ok() const;
  void wait();

private:
  class Impl;
  std::unique_ptr<Impl> impl;
};
}