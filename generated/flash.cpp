namespace target {
  namespace flash {
    namespace reg {
      
      /**
        Flash access control register
      */
      class ACR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets LATENCY
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getLATENCY() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets LATENCY
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setLATENCY(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
        /**
          Gets PRFTBE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPRFTBE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets PRFTBE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPRFTBE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets PRFTBS
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPRFTBS() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets PRFTBS
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPRFTBS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
      };
      
      /**
        Flash key register
      */
      class KEYR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Flash Key
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFKEYR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Flash Key
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFKEYR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Flash option key register
      */
      class OPTKEYR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Option byte key
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getOPTKEYR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Option byte key
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setOPTKEYR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Flash status register
      */
      class SR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets End of operation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOP() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets End of operation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Write protection error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWRPRT() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Write protection error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWRPRT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Programming error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPGERR() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Programming error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPGERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Busy
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBSY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Busy
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBSY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Flash control register
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
          Gets Force option byte loading
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFORCE_OPTLOAD() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Force option byte loading
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFORCE_OPTLOAD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets End of operation interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOPIE() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets End of operation interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOPIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRIE() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Option bytes write enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOPTWRE() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Option bytes write enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOPTWRE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Lock
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLOCK() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Lock
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLOCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Start
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTRT() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Start
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTRT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Option byte erase
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOPTER() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Option byte erase
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOPTER(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Option byte programming
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOPTPG() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Option byte programming
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOPTPG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Mass erase
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMER() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Mass erase
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMER(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Page erase
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPER() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Page erase
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPER(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Programming
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPG() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Programming
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        Flash address register
      */
      class AR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Flash address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFAR() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Flash address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFAR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        Option byte register
      */
      class OBR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Data0
          @param index in range 0..1
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getData(int index) volatile {
          return (raw & (0xFF << (16 + 8 * (index - 0)))) >> (16 + 8 * (index - 0));
        }
        /**
          Sets Data0
          @param index in range 0..1
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setData(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (16 + 8 * (index - 0)))) | ((value << (16 + 8 * (index - 0))) & (0xFF << (16 + 8 * (index - 0))));
        }
        /**
          Gets Data0
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getData() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets Data0
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setData(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets Option byte error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOPTERR() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Option byte error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOPTERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Read protection level status
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRDPRT() volatile {
          return (raw & (0x3 << 1)) >> 1;
        }
        /**
          Sets Read protection level status
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setRDPRT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((value << 1) & (0x3 << 1));
        }
        /**
          Gets WDG_SW
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWDG_SW() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets WDG_SW
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWDG_SW(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets nRST_STOP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getnRST_STOP() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets nRST_STOP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setnRST_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets nRST_STDBY
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getnRST_STDBY() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets nRST_STDBY
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setnRST_STDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets BOOT1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getnBOOT1() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets BOOT1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setnBOOT1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets VDDA_MONITOR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getVDDA_MONITOR() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets VDDA_MONITOR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setVDDA_MONITOR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets RAM_PARITY_CHECK
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRAM_PARITY_CHECK_() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets RAM_PARITY_CHECK
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRAM_PARITY_CHECK_(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
      };
      
      /**
        Write protection register
      */
      class WRPR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Write protect
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getWRP() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Write protect
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setWRP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Flash access control register
          */
          volatile reg::ACR ACR;
        };
        struct {
          volatile char _space_KEYR[4];
          /**
            Flash key register
          */
          volatile reg::KEYR KEYR;
        };
        struct {
          volatile char _space_OPTKEYR[8];
          /**
            Flash option key register
          */
          volatile reg::OPTKEYR OPTKEYR;
        };
        struct {
          volatile char _space_SR[12];
          /**
            Flash status register
          */
          volatile reg::SR SR;
        };
        struct {
          volatile char _space_CR[16];
          /**
            Flash control register
          */
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_AR[20];
          /**
            Flash address register
          */
          volatile reg::AR AR;
        };
        struct {
          volatile char _space_OBR[28];
          /**
            Option byte register
          */
          volatile reg::OBR OBR;
        };
        struct {
          volatile char _space_WRPR[32];
          /**
            Write protection register
          */
          volatile reg::WRPR WRPR;
        };
      };
    };
  }
  
  extern flash::Peripheral FLASH;
}