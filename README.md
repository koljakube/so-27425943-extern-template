# MCVE for errors in extern templates

Created for [this StackOverflow question](http://stackoverflow.com/questions/27425943/undefined-symbols-with-extern-templates-in-a-static-library?noredirect=1#comment43293703_27425943).

This build (run `build.sh`) will fail while linking FooTest. But if you put `Foo`'s
default constructor (Foo.hpp:15) below the definition for `Foo(T const& val)`, it
links fine.

This behavior can cause problems in other places, whenever there are `constexpr`
methods that other methods depend on.


