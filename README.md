# volatility-smile-trading - a C++ framework
Volatility Smile Trading in options derivatives refers to a trading strategy or analytical approach that exploits the non-uniform distribution of implied volatility (IV) across different strike prices of options with the same expiration date. This is an example framework of how it can be developed. Further enhancements will be included in the future.

#### Instructions
- Clone the repository:\
  git clone [https://github.com/manuelmusngi/volatility-smile-trading](https://github.com/manuelmusngi/volatility-smile-trading-analysis-framework) \
  cd volatility-smile-trading
  
- Build the project:\
  mkdir build
  cd build
  cmake ..
  make

- Run the program\
  ./VolatilitySmileTrading

#### project structure 
volatility-smile-trading\
├── include/\
│   ├── BlackScholes.hpp\
│   ├── VolatilitySmile.hpp\
│   ├── OptionPricing.hpp\
├── src/\
│   ├── BlackScholes.cpp\
│   ├── VolatilitySmile.cpp\
│   ├── OptionPricing.cpp\
│   ├── main.cpp\
├── CMakeLists.txt\
├── README.md
