namespace target {
  namespace flash {
    
    /**
      Flash access control register
    */
    namespace ACR {
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
          Gets LATENCY
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getLATENCY() volatile {
          return ((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets LATENCY
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setLATENCY(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((((value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
        /**
          Gets PRFTBE
          @return boolean value
        */
        __attribute__((always_inline)) bool getPRFTBE() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets PRFTBE
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPRFTBE(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets PRFTBS
          @return boolean value
        */
        __attribute__((always_inline)) bool getPRFTBS() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets PRFTBS
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPRFTBS(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Flash key register
    */
    namespace KEYR {
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
          Gets Flash Key
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFKEYR() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Flash Key
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setFKEYR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Flash option key register
    */
    namespace OPTKEYR {
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
          Gets Option byte key
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getOPTKEYR() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Option byte key
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setOPTKEYR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Flash status register
    */
    namespace SR {
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
          Gets End of operation
          @return boolean value
        */
        __attribute__((always_inline)) bool getEOP() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets End of operation
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEOP(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Write protection error
          @return boolean value
        */
        __attribute__((always_inline)) bool getWRPRT() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Write protection error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWRPRT(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Programming error
          @return boolean value
        */
        __attribute__((always_inline)) bool getPGERR() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Programming error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPGERR(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getBSY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBSY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Flash control register
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
          Gets Force option byte loading
          @return boolean value
        */
        __attribute__((always_inline)) bool getFORCE_OPTLOAD() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Force option byte loading
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFORCE_OPTLOAD(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets End of operation interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEOPIE() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets End of operation interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEOPIE(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Error interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getERRIE() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets Error interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setERRIE(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets Option bytes write enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOPTWRE() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Option bytes write enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOPTWRE(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Lock
          @return boolean value
        */
        __attribute__((always_inline)) bool getLOCK() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Lock
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLOCK(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Start
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTRT() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Start
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTRT(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Option byte erase
          @return boolean value
        */
        __attribute__((always_inline)) bool getOPTER() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Option byte erase
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOPTER(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Option byte programming
          @return boolean value
        */
        __attribute__((always_inline)) bool getOPTPG() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Option byte programming
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOPTPG(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Mass erase
          @return boolean value
        */
        __attribute__((always_inline)) bool getMER() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Mass erase
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMER(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Page erase
          @return boolean value
        */
        __attribute__((always_inline)) bool getPER() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Page erase
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPER(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Programming
          @return boolean value
        */
        __attribute__((always_inline)) bool getPG() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Programming
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPG(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Flash address register
    */
    namespace AR {
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
          Gets Flash address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFAR() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Flash address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setFAR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Option byte register
    */
    namespace OBR {
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
          Gets Data0
          @param index in range 0..1
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getData(int index) volatile {
          return ((raw & (0xFF << (16 + 8 * (index - 0)))) >> (16 + 8 * (index - 0)));
        }
        /**
          Sets Data0
          @param index in range 0..1
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setData(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (16 + 8 * (index - 0)))) | ((((value)) << (16 + 8 * (index - 0))) & (0xFF << (16 + 8 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Option byte error
          @return boolean value
        */
        __attribute__((always_inline)) bool getOPTERR() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Option byte error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOPTERR(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Read protection level status
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRDPRT() volatile {
          return ((raw & (0x3 << 1)) >> 1);
        }
        /**
          Sets Read protection level status
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setRDPRT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((((value)) << 1) & (0x3 << 1));
          return *(Register*)this;
        }
        /**
          Gets WDG_SW
          @return boolean value
        */
        __attribute__((always_inline)) bool getWDG_SW() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets WDG_SW
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWDG_SW(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets nRST_STOP
          @return boolean value
        */
        __attribute__((always_inline)) bool getnRST_STOP() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets nRST_STOP
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setnRST_STOP(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets nRST_STDBY
          @return boolean value
        */
        __attribute__((always_inline)) bool getnRST_STDBY() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets nRST_STDBY
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setnRST_STDBY(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets BOOT1
          @return boolean value
        */
        __attribute__((always_inline)) bool getnBOOT1() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets BOOT1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setnBOOT1(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets VDDA_MONITOR
          @return boolean value
        */
        __attribute__((always_inline)) bool getVDDA_MONITOR() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets VDDA_MONITOR
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setVDDA_MONITOR(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets RAM_PARITY_CHECK
          @return boolean value
        */
        __attribute__((always_inline)) bool getRAM_PARITY_CHECK() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets RAM_PARITY_CHECK
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRAM_PARITY_CHECK(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Write protection register
    */
    namespace WRPR {
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
          Gets Write protect
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getWRP() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Write protect
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setWRP(unsigned long value) volatile {
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
            Flash access control register
          */
          ACR::Register ACR;
        };
        struct {
          char _space_KEYR[0x4];
          /**
            Flash key register
          */
          KEYR::Register KEYR;
        };
        struct {
          char _space_OPTKEYR[0x8];
          /**
            Flash option key register
          */
          OPTKEYR::Register OPTKEYR;
        };
        struct {
          char _space_SR[0xc];
          /**
            Flash status register
          */
          SR::Register SR;
        };
        struct {
          char _space_CR[0x10];
          /**
            Flash control register
          */
          CR::Register CR;
        };
        struct {
          char _space_AR[0x14];
          /**
            Flash address register
          */
          AR::Register AR;
        };
        struct {
          char _space_OBR[0x1c];
          /**
            Option byte register
          */
          OBR::Register OBR;
        };
        struct {
          char _space_WRPR[0x20];
          /**
            Write protection register
          */
          WRPR::Register WRPR;
        };
      };
    };
  }
  
  extern volatile flash::Peripheral FLASH;
}