namespace target {
  namespace crc {
    namespace reg {
      
      /**
        Data register
      */
      class DR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Data register bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Data register bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Independent data register
      */
      class IDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets General-purpose 8-bit data register bits
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getIDR() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets General-purpose 8-bit data register bits
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setIDR(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Control register
      */
      class CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets reset bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESET() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets reset bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Reverse input data
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getREV_IN() volatile {
          return (raw & (0x3 << 5)) >> 5;
        }
        /**
          Sets Reverse input data
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setREV_IN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 5)) | ((value << 5) & (0x3 << 5));
        }
        /**
          Gets Reverse output data
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREV_OUT() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Reverse output data
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREV_OUT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        Initial CRC value
      */
      class INIT {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Programmable initial CRC value
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getINIT() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Programmable initial CRC value
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setINIT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
          volatile reg::DR DR;
        };
        struct {
          volatile char _space_IDR[4];
          /**
            Independent data register
          */
          volatile reg::IDR IDR;
        };
        struct {
          volatile char _space_CR[8];
          /**
            Control register
          */
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_INIT[12];
          /**
            Initial CRC value
          */
          volatile reg::INIT INIT;
        };
      };
    };
  }
  
  extern crc::Peripheral CRC;
}