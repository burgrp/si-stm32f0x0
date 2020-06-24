namespace target {
  namespace adc {
    
    /**
      interrupt and status register
    */
    namespace ISR {
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
          Gets Analog watchdog flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getAWD() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Analog watchdog flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAWD(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets ADC overrun
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVR() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets ADC overrun
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVR(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets End of sequence flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getEOS() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets End of sequence flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEOS(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets End of conversion flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getEOC() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets End of conversion flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEOC(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets End of sampling flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getEOSMP() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets End of sampling flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEOSMP(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets ADC ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getADRDY() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets ADC ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      interrupt enable register
    */
    namespace IER {
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
          Gets Analog watchdog interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getAWDIE() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Analog watchdog interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAWDIE(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Overrun interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVRIE() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Overrun interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVRIE(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets End of conversion sequence interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEOSIE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets End of conversion sequence interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEOSIE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets End of conversion interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEOCIE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets End of conversion interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEOCIE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets End of sampling flag interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEOSMPIE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets End of sampling flag interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEOSMPIE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets ADC ready interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getADRDYIE() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets ADC ready interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADRDYIE(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      control register
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
          Gets ADC calibration
          @return boolean value
        */
        __attribute__((always_inline)) bool getADCAL() volatile {
          return ((raw & (0x1 << 31)) >> 31);
        }
        /**
          Sets ADC calibration
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADCAL(bool value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((((value)) << 31) & (0x1 << 31));
          return *(Register*)this;
        }
        /**
          Gets ADC stop conversion command
          @return boolean value
        */
        __attribute__((always_inline)) bool getADSTP() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets ADC stop conversion command
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADSTP(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets ADC start conversion command
          @return boolean value
        */
        __attribute__((always_inline)) bool getADSTART() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets ADC start conversion command
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADSTART(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets ADC disable command
          @return boolean value
        */
        __attribute__((always_inline)) bool getADDIS() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets ADC disable command
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADDIS(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets ADC enable command
          @return boolean value
        */
        __attribute__((always_inline)) bool getADEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets ADC enable command
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      configuration register 1
    */
    namespace CFGR1 {
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
          Gets Analog watchdog channel selection
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getAWDCH() volatile {
          return ((raw & (0x1F << 26)) >> 26);
        }
        /**
          Sets Analog watchdog channel selection
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setAWDCH(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 26)) | ((((value)) << 26) & (0x1F << 26));
          return *(Register*)this;
        }
        /**
          Gets Analog watchdog enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getAWDEN() volatile {
          return ((raw & (0x1 << 23)) >> 23);
        }
        /**
          Sets Analog watchdog enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAWDEN(bool value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((((value)) << 23) & (0x1 << 23));
          return *(Register*)this;
        }
        /**
          Gets Enable the watchdog on a single channel or on all channels
          @return boolean value
        */
        __attribute__((always_inline)) bool getAWDSGL() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets Enable the watchdog on a single channel or on all channels
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAWDSGL(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
        /**
          Gets Discontinuous mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getDISCEN() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets Discontinuous mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDISCEN(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets Auto-off mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getAUTOFF() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Auto-off mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAUTOFF(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Auto-delayed conversion mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getAUTDLY() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Auto-delayed conversion mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAUTDLY(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Single / continuous conversion mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getCONT() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Single / continuous conversion mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCONT(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets Overrun management mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVRMOD() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Overrun management mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVRMOD(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets External trigger enable and polarity selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEXTEN() volatile {
          return ((raw & (0x3 << 10)) >> 10);
        }
        /**
          Sets External trigger enable and polarity selection
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setEXTEN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((((value)) << 10) & (0x3 << 10));
          return *(Register*)this;
        }
        /**
          Gets External trigger selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getEXTSEL() volatile {
          return ((raw & (0x7 << 6)) >> 6);
        }
        /**
          Sets External trigger selection
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setEXTSEL(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 6)) | ((((value)) << 6) & (0x7 << 6));
          return *(Register*)this;
        }
        /**
          Gets Data alignment
          @return boolean value
        */
        __attribute__((always_inline)) bool getALIGN() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Data alignment
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setALIGN(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Data resolution
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRES() volatile {
          return ((raw & (0x3 << 3)) >> 3);
        }
        /**
          Sets Data resolution
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setRES(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((((value)) << 3) & (0x3 << 3));
          return *(Register*)this;
        }
        /**
          Gets Scan sequence direction
          @return boolean value
        */
        __attribute__((always_inline)) bool getSCANDIR() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Scan sequence direction
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSCANDIR(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Direct memery access configuration
          @return boolean value
        */
        __attribute__((always_inline)) bool getDMACFG() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Direct memery access configuration
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDMACFG(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Direct memory access enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDMAEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Direct memory access enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDMAEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      configuration register 2
    */
    namespace CFGR2 {
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
          Gets JITOFF_D4
          @return boolean value
        */
        __attribute__((always_inline)) bool getJITOFF_D4() volatile {
          return ((raw & (0x1 << 31)) >> 31);
        }
        /**
          Sets JITOFF_D4
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setJITOFF_D4(bool value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((((value)) << 31) & (0x1 << 31));
          return *(Register*)this;
        }
        /**
          Gets JITOFF_D2
          @return boolean value
        */
        __attribute__((always_inline)) bool getJITOFF_D2() volatile {
          return ((raw & (0x1 << 30)) >> 30);
        }
        /**
          Sets JITOFF_D2
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setJITOFF_D2(bool value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((((value)) << 30) & (0x1 << 30));
          return *(Register*)this;
        }
      };
    };
    
    /**
      sampling time register
    */
    namespace SMPR {
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
          Gets Sampling time selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getSMPR() volatile {
          return ((raw & (0x7 << 0)) >> 0);
        }
        /**
          Sets Sampling time selection
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setSMPR(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((((value)) << 0) & (0x7 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      watchdog threshold register
    */
    namespace TR {
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
          Gets Analog watchdog higher threshold
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getHT() volatile {
          return ((raw & (0xFFF << 16)) >> 16);
        }
        /**
          Sets Analog watchdog higher threshold
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setHT(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 16)) | ((((value)) << 16) & (0xFFF << 16));
          return *(Register*)this;
        }
        /**
          Gets Analog watchdog lower threshold
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getLT() volatile {
          return ((raw & (0xFFF << 0)) >> 0);
        }
        /**
          Sets Analog watchdog lower threshold
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setLT(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((((value)) << 0) & (0xFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      channel selection register
    */
    namespace CHSELR {
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
          Gets Channel-x selection
          @param index in range 0..18
          @return boolean value
        */
        __attribute__((always_inline)) bool getCHSEL(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Channel-x selection
          @param index in range 0..18
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCHSEL(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      data register
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
          Gets Converted data
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Converted data
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      common configuration register
    */
    namespace CCR {
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
          Gets VBAT enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getVBATEN() volatile {
          return ((raw & (0x1 << 24)) >> 24);
        }
        /**
          Sets VBAT enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setVBATEN(bool value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((((value)) << 24) & (0x1 << 24));
          return *(Register*)this;
        }
        /**
          Gets Temperature sensor enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTSEN() volatile {
          return ((raw & (0x1 << 23)) >> 23);
        }
        /**
          Sets Temperature sensor enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTSEN(bool value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((((value)) << 23) & (0x1 << 23));
          return *(Register*)this;
        }
        /**
          Gets Temperature sensor and VREFINT enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getVREFEN() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets Temperature sensor and VREFINT enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setVREFEN(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            interrupt and status register
          */
          ISR::Register ISR;
        };
        struct {
          char _space_IER[0x4];
          /**
            interrupt enable register
          */
          IER::Register IER;
        };
        struct {
          char _space_CR[0x8];
          /**
            control register
          */
          CR::Register CR;
        };
        struct {
          char _space_CFGR1[0xc];
          /**
            configuration register 1
          */
          CFGR1::Register CFGR1;
        };
        struct {
          char _space_CFGR2[0x10];
          /**
            configuration register 2
          */
          CFGR2::Register CFGR2;
        };
        struct {
          char _space_SMPR[0x14];
          /**
            sampling time register
          */
          SMPR::Register SMPR;
        };
        struct {
          char _space_TR[0x20];
          /**
            watchdog threshold register
          */
          TR::Register TR;
        };
        struct {
          char _space_CHSELR[0x28];
          /**
            channel selection register
          */
          CHSELR::Register CHSELR;
        };
        struct {
          char _space_DR[0x40];
          /**
            data register
          */
          DR::Register DR;
        };
        struct {
          char _space_CCR[0x308];
          /**
            common configuration register
          */
          CCR::Register CCR;
        };
      };
    };
  }
  
  extern volatile adc::Peripheral ADC;
}