# qr-volatility-smile-trading


#### project structure 
qr-volatility-smile-trading/
\
├── CMakeLists.txt\                                 
├── README.md\                  
├── data/\                             
├── docs/\                             
│   └── design.md\                      
├── include/                          # Header files\
│   ├── data_fetcher.h                # Header for data fetching
│   ├── trading_strategy.h            # Header for trading strategy
│   ├── volatility_smile.h            # Header for volatility smile calculation
│   └── utils.h                       # Utility functions
├── src/                              # Source files
│   ├── data_fetcher.cpp              # Implementation of data fetching
│   ├── main.cpp                      # Main program entry point
│   ├── trading_strategy.cpp          # Implementation of trading strategy
│   ├── volatility_smile.cpp          # Implementation of volatility smile calculation
│   └── utils.cpp                     # Utility functions implementation
└── tests/                            # Unit tests
    ├── CMakeLists.txt                # CMake configuration for tests
    ├── test_data_fetcher.cpp         # Tests for data fetching
    ├── test_trading_strategy.cpp     # Tests for trading strategy
    ├── test_volatility_smile.cpp     # Tests for volatility smile calculation
    └── test_utils.cpp                # Tests for utility functions
