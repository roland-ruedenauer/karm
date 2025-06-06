module;

#include <karm-base/rc.h>

export module Karm.Aio:pipe;

import :traits;

namespace Karm::Aio {

export struct Pipe {
    bool _closed;

    struct Reader : Aio::Reader {
        Rc<Pipe> _pipe;
    };

    struct Writer : Aio::Writer {
        Rc<Pipe> _pipe;
    };
};

export Pair<Rc<Pipe::Writer>, Rc<Pipe::Reader>> pipe();

} // namespace Karm::Aio
