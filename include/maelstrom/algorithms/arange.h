#pragma once

#include "containers/vector.h"

namespace maelstrom {

    /*
        Constructs a new vector consisting of a range from start to end of the
        given increment.
        The dtype is automatically inferred from start.
    */
    maelstrom::vector arange(maelstrom::storage mem_type, boost::any start, boost::any end, boost::any inc);

    /*
        Constructs a new vector consisting of a range from start to end
        of increment 1.
        The dtype is automatically inferred from start.
    */
    maelstrom::vector arange(maelstrom::storage mem_type, boost::any start, boost::any end);

    /*
        Constructs a new vector consisting of a range from 0 to N-1
        a.k.a. [0, N-1], of increment 1.
        The dtype is automatically inferred from N.
    */
    maelstrom::vector arange(maelstrom::storage mem_type, boost::any N);

}