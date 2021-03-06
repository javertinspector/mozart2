class SpaceLike {
public:
  SpaceLike(RichNode self) : _self(self) {}
  SpaceLike(UnstableNode& self) : _self(self) {}
  SpaceLike(StableNode& self) : _self(self) {}

  bool isSpace(VM vm) {
    if (_self.is<ReifiedSpace>()) {
      return _self.as<ReifiedSpace>().isSpace(vm);
    } else if (_self.is<FailedSpace>()) {
      return _self.as<FailedSpace>().isSpace(vm);
    } else if (_self.is<MergedSpace>()) {
      return _self.as<MergedSpace>().isSpace(vm);
    } else if (_self.isTransient()) {
      waitFor(vm, _self);
      throw std::exception(); // not reachable
    } else {
      return Interface<SpaceLike>().isSpace(_self, vm);
    }
  }

  class mozart::UnstableNode askSpace(VM vm) {
    if (_self.is<ReifiedSpace>()) {
      return _self.as<ReifiedSpace>().askSpace(vm);
    } else if (_self.is<FailedSpace>()) {
      return _self.as<FailedSpace>().askSpace(vm);
    } else if (_self.is<MergedSpace>()) {
      return _self.as<MergedSpace>().askSpace(vm);
    } else if (_self.isTransient()) {
      waitFor(vm, _self);
      throw std::exception(); // not reachable
    } else {
      return Interface<SpaceLike>().askSpace(_self, vm);
    }
  }

  class mozart::UnstableNode askVerboseSpace(VM vm) {
    if (_self.is<ReifiedSpace>()) {
      return _self.as<ReifiedSpace>().askVerboseSpace(vm);
    } else if (_self.is<FailedSpace>()) {
      return _self.as<FailedSpace>().askVerboseSpace(vm);
    } else if (_self.is<MergedSpace>()) {
      return _self.as<MergedSpace>().askVerboseSpace(vm);
    } else if (_self.isTransient()) {
      waitFor(vm, _self);
      throw std::exception(); // not reachable
    } else {
      return Interface<SpaceLike>().askVerboseSpace(_self, vm);
    }
  }

  class mozart::UnstableNode mergeSpace(VM vm) {
    if (_self.is<ReifiedSpace>()) {
      return _self.as<ReifiedSpace>().mergeSpace(vm);
    } else if (_self.is<FailedSpace>()) {
      return _self.as<FailedSpace>().mergeSpace(vm);
    } else if (_self.is<MergedSpace>()) {
      return _self.as<MergedSpace>().mergeSpace(vm);
    } else if (_self.isTransient()) {
      waitFor(vm, _self);
      throw std::exception(); // not reachable
    } else {
      return Interface<SpaceLike>().mergeSpace(_self, vm);
    }
  }

  void commitSpace(VM vm, class mozart::RichNode value) {
    if (_self.is<ReifiedSpace>()) {
      return _self.as<ReifiedSpace>().commitSpace(vm, value);
    } else if (_self.is<FailedSpace>()) {
      return _self.as<FailedSpace>().commitSpace(vm, value);
    } else if (_self.is<MergedSpace>()) {
      return _self.as<MergedSpace>().commitSpace(vm, value);
    } else if (_self.isTransient()) {
      waitFor(vm, _self);
      throw std::exception(); // not reachable
    } else {
      return Interface<SpaceLike>().commitSpace(_self, vm, value);
    }
  }

  class mozart::UnstableNode cloneSpace(VM vm) {
    if (_self.is<ReifiedSpace>()) {
      return _self.as<ReifiedSpace>().cloneSpace(vm);
    } else if (_self.is<FailedSpace>()) {
      return _self.as<FailedSpace>().cloneSpace(vm);
    } else if (_self.is<MergedSpace>()) {
      return _self.as<MergedSpace>().cloneSpace(vm);
    } else if (_self.isTransient()) {
      waitFor(vm, _self);
      throw std::exception(); // not reachable
    } else {
      return Interface<SpaceLike>().cloneSpace(_self, vm);
    }
  }

  void killSpace(VM vm) {
    if (_self.is<ReifiedSpace>()) {
      return _self.as<ReifiedSpace>().killSpace(vm);
    } else if (_self.is<FailedSpace>()) {
      return _self.as<FailedSpace>().killSpace(vm);
    } else if (_self.is<MergedSpace>()) {
      return _self.as<MergedSpace>().killSpace(vm);
    } else if (_self.isTransient()) {
      waitFor(vm, _self);
      throw std::exception(); // not reachable
    } else {
      return Interface<SpaceLike>().killSpace(_self, vm);
    }
  }
protected:
  RichNode _self;
};

