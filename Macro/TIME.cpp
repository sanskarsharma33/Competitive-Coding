using namespace std::chrono;

#define UNTIL(t) while(clock()<CLOCKS_PER_SEC*(t))

auto start=high_resolution_clock::now(); 
{/*code*/}
auto stop=high_resolution_clock::now();
auto duration=duration_cast<microseconds>(stop - start); 
cerr<<"Time taken by function : "<<duration.count()<<" microseconds"<<endl;