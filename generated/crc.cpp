namespace target {
  namespace crc {
    
    /**
      Data register
    */
    namespace DR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Data register bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDR() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Data register bits
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setDR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Independent data register
    */
    namespace IDR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets General-purpose 8-bit data register bits
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getIDR() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets General-purpose 8-bit data register bits
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setIDR(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Control register
    */
    namespace CR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets reset bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getRESET() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets reset bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRESET(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Polynomial size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPOLYSIZE() volatile {
          return ((raw & (0x3 << 3)) >> 3);
        }
        /**
          Sets Polynomial size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPOLYSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((((value)) << 3) & (0x3 << 3));
          return *(Register*)this;
        }
        /**
          Gets Reverse input data
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getREV_IN() volatile {
          return ((raw & (0x3 << 5)) >> 5);
        }
        /**
          Sets Reverse input data
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setREV_IN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 5)) | ((((value)) << 5) & (0x3 << 5));
          return *(Register*)this;
        }
        /**
          Gets Reverse output data
          @return boolean value
        */
        __attribute__((always_inline)) bool getREV_OUT() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Reverse output data
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setREV_OUT(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Initial CRC value
    */
    namespace INIT {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Programmable initial CRC value
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getINIT() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Programmable initial CRC value
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setINIT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Data register
          */
          DR::Register DR;
        };
        struct {
          char _space_IDR[0x4];
          /**
            Independent data register
          */
          IDR::Register IDR;
        };
        struct {
          char _space_CR[0x8];
          /**
            Control register
          */
          CR::Register CR;
        };
        struct {
          char _space_INIT[0xc];
          /**
            Initial CRC value
          */
          INIT::Register INIT;
        };
      };
    };
  }
  
  extern volatile crc::Peripheral CRC;
}