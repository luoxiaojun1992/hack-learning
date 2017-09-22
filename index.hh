<?hh

async function test1() : Awaitable<void> {
   for ($i = 0; $i < 10; ++$i) {
       echo $i;
   }
}

async function test2() : Awaitable<void> {
   for ($i = 0; $i < 10; ++$i) {
       echo $i;
   }
}

async function main() : Awaitable<void> {
    await \HH\Asio\v([
        test1(),
	test2()
    ]);
}

\HH\Asio\join(main());

