namespace target {
  namespace rtc {
    
    /**
      time register
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
          Gets AM/PM notation
          @return boolean value
        */
        __attribute__((always_inline)) bool getPM() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets AM/PM notation
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPM(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
        /**
          Gets Hour tens in BCD format
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getHT() volatile {
          return ((raw & (0x3 << 20)) >> 20);
        }
        /**
          Sets Hour tens in BCD format
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setHT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((((value)) << 20) & (0x3 << 20));
          return *(Register*)this;
        }
        /**
          Gets Hour units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHU() volatile {
          return ((raw & (0xF << 16)) >> 16);
        }
        /**
          Sets Hour units in BCD format
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setHU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((((value)) << 16) & (0xF << 16));
          return *(Register*)this;
        }
        /**
          Gets Minute tens in BCD format
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMNT() volatile {
          return ((raw & (0x7 << 12)) >> 12);
        }
        /**
          Sets Minute tens in BCD format
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setMNT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((((value)) << 12) & (0x7 << 12));
          return *(Register*)this;
        }
        /**
          Gets Minute units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMNU() volatile {
          return ((raw & (0xF << 8)) >> 8);
        }
        /**
          Sets Minute units in BCD format
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setMNU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((((value)) << 8) & (0xF << 8));
          return *(Register*)this;
        }
        /**
          Gets Second tens in BCD format
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getST() volatile {
          return ((raw & (0x7 << 4)) >> 4);
        }
        /**
          Sets Second tens in BCD format
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setST(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((((value)) << 4) & (0x7 << 4));
          return *(Register*)this;
        }
        /**
          Gets Second units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSU() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Second units in BCD format
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setSU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      date register
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
          Gets Year tens in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getYT() volatile {
          return ((raw & (0xF << 20)) >> 20);
        }
        /**
          Sets Year tens in BCD format
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setYT(unsigned long value) volatile {
          raw = (raw & ~(0xF << 20)) | ((((value)) << 20) & (0xF << 20));
          return *(Register*)this;
        }
        /**
          Gets Year units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getYU() volatile {
          return ((raw & (0xF << 16)) >> 16);
        }
        /**
          Sets Year units in BCD format
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setYU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((((value)) << 16) & (0xF << 16));
          return *(Register*)this;
        }
        /**
          Gets Week day units
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getWDU() volatile {
          return ((raw & (0x7 << 13)) >> 13);
        }
        /**
          Sets Week day units
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setWDU(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 13)) | ((((value)) << 13) & (0x7 << 13));
          return *(Register*)this;
        }
        /**
          Gets Month tens in BCD format
          @return boolean value
        */
        __attribute__((always_inline)) bool getMT() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Month tens in BCD format
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMT(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Month units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMU() volatile {
          return ((raw & (0xF << 8)) >> 8);
        }
        /**
          Sets Month units in BCD format
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setMU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((((value)) << 8) & (0xF << 8));
          return *(Register*)this;
        }
        /**
          Gets Date tens in BCD format
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDT() volatile {
          return ((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Date tens in BCD format
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setDT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((((value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Date units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDU() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Date units in BCD format
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setDU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
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
          Gets Time-stamp event active edge
          @return boolean value
        */
        __attribute__((always_inline)) bool getTSEDGE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Time-stamp event active edge
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTSEDGE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets RTC_REFIN reference clock detection enable (50 or 60 Hz)
          @return boolean value
        */
        __attribute__((always_inline)) bool getREFCKON() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets RTC_REFIN reference clock detection enable (50 or 60 Hz)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setREFCKON(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Bypass the shadow registers
          @return boolean value
        */
        __attribute__((always_inline)) bool getBYPSHAD() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Bypass the shadow registers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBYPSHAD(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Hour format
          @return boolean value
        */
        __attribute__((always_inline)) bool getFMT() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Hour format
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFMT(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Alarm A enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getALRAE() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Alarm A enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setALRAE(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets timestamp enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTSE() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets timestamp enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTSE(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Alarm A interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getALRAIE() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Alarm A interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setALRAIE(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Time-stamp interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTSIE() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Time-stamp interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTSIE(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Add 1 hour (summer time change)
          @return boolean value
        */
        __attribute__((always_inline)) bool getADD1H() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets Add 1 hour (summer time change)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADD1H(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets Subtract 1 hour (winter time change)
          @return boolean value
        */
        __attribute__((always_inline)) bool getSUB1H() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets Subtract 1 hour (winter time change)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSUB1H(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets Backup
          @return boolean value
        */
        __attribute__((always_inline)) bool getBKP() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets Backup
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBKP(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets Calibration output selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOSEL() volatile {
          return ((raw & (0x1 << 19)) >> 19);
        }
        /**
          Sets Calibration output selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOSEL(bool value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((((value)) << 19) & (0x1 << 19));
          return *(Register*)this;
        }
        /**
          Gets Output polarity
          @return boolean value
        */
        __attribute__((always_inline)) bool getPOL() volatile {
          return ((raw & (0x1 << 20)) >> 20);
        }
        /**
          Sets Output polarity
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPOL(bool value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((((value)) << 20) & (0x1 << 20));
          return *(Register*)this;
        }
        /**
          Gets Output selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOSEL() volatile {
          return ((raw & (0x3 << 21)) >> 21);
        }
        /**
          Sets Output selection
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setOSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 21)) | ((((value)) << 21) & (0x3 << 21));
          return *(Register*)this;
        }
        /**
          Gets Calibration output enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOE() volatile {
          return ((raw & (0x1 << 23)) >> 23);
        }
        /**
          Sets Calibration output enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOE(bool value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((((value)) << 23) & (0x1 << 23));
          return *(Register*)this;
        }
      };
    };
    
    /**
      initialization and status register
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
          Gets RTC_TAMP1 detection flag
          @param index in range 1..2
          @return boolean value
        */
        __attribute__((always_inline)) bool getTAMP_F(int index) volatile {
          return ((raw & (0x1 << (13 + 1 * (index - 1)))) >> (13 + 1 * (index - 1)));
        }
        /**
          Sets RTC_TAMP1 detection flag
          @param index in range 1..2
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTAMP_F(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (13 + 1 * (index - 1)))) | ((((value)) << (13 + 1 * (index - 1))) & (0x1 << (13 + 1 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets Alarm A write flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getALRAWF() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Alarm A write flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setALRAWF(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Shift operation pending
          @return boolean value
        */
        __attribute__((always_inline)) bool getSHPF() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Shift operation pending
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSHPF(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Initialization status flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getINITS() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Initialization status flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setINITS(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Registers synchronization flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getRSF() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Registers synchronization flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRSF(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Initialization flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getINITF() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Initialization flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setINITF(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Initialization mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getINIT() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Initialization mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setINIT(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Alarm A flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getALRAF() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Alarm A flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setALRAF(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Time-stamp flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getTSF() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Time-stamp flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTSF(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Time-stamp overflow flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getTSOVF() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Time-stamp overflow flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTSOVF(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Recalibration pending Flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getRECALPF() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets Recalibration pending Flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRECALPF(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      prescaler register
    */
    namespace PRER {
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
          Gets Asynchronous prescaler factor
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getPREDIV_A() volatile {
          return ((raw & (0x7F << 16)) >> 16);
        }
        /**
          Sets Asynchronous prescaler factor
          @param value value in range 0..127
        */
        __attribute__((always_inline)) Register& setPREDIV_A(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 16)) | ((((value)) << 16) & (0x7F << 16));
          return *(Register*)this;
        }
        /**
          Gets Synchronous prescaler factor
          @return value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long getPREDIV_S() volatile {
          return ((raw & (0x7FFF << 0)) >> 0);
        }
        /**
          Sets Synchronous prescaler factor
          @param value value in range 0..32767
        */
        __attribute__((always_inline)) Register& setPREDIV_S(unsigned long value) volatile {
          raw = (raw & ~(0x7FFF << 0)) | ((((value)) << 0) & (0x7FFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      alarm A register
    */
    namespace ALRMAR {
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
          Gets Alarm A seconds mask
          @param index in range 1..4
          @return boolean value
        */
        __attribute__((always_inline)) bool getMSK(int index) volatile {
          return ((raw & (0x1 << (7 + 8 * (index - 1)))) >> (7 + 8 * (index - 1)));
        }
        /**
          Sets Alarm A seconds mask
          @param index in range 1..4
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMSK(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (7 + 8 * (index - 1)))) | ((((value)) << (7 + 8 * (index - 1))) & (0x1 << (7 + 8 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets Week day selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getWDSEL() volatile {
          return ((raw & (0x1 << 30)) >> 30);
        }
        /**
          Sets Week day selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWDSEL(bool value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((((value)) << 30) & (0x1 << 30));
          return *(Register*)this;
        }
        /**
          Gets Date tens in BCD format.
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDT() volatile {
          return ((raw & (0x3 << 28)) >> 28);
        }
        /**
          Sets Date tens in BCD format.
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setDT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 28)) | ((((value)) << 28) & (0x3 << 28));
          return *(Register*)this;
        }
        /**
          Gets Date units or day in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDU() volatile {
          return ((raw & (0xF << 24)) >> 24);
        }
        /**
          Sets Date units or day in BCD format.
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setDU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((((value)) << 24) & (0xF << 24));
          return *(Register*)this;
        }
        /**
          Gets AM/PM notation
          @return boolean value
        */
        __attribute__((always_inline)) bool getPM() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets AM/PM notation
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPM(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
        /**
          Gets Hour tens in BCD format.
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getHT() volatile {
          return ((raw & (0x3 << 20)) >> 20);
        }
        /**
          Sets Hour tens in BCD format.
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setHT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((((value)) << 20) & (0x3 << 20));
          return *(Register*)this;
        }
        /**
          Gets Hour units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHU() volatile {
          return ((raw & (0xF << 16)) >> 16);
        }
        /**
          Sets Hour units in BCD format.
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setHU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((((value)) << 16) & (0xF << 16));
          return *(Register*)this;
        }
        /**
          Gets Minute tens in BCD format.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMNT() volatile {
          return ((raw & (0x7 << 12)) >> 12);
        }
        /**
          Sets Minute tens in BCD format.
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setMNT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((((value)) << 12) & (0x7 << 12));
          return *(Register*)this;
        }
        /**
          Gets Minute units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMNU() volatile {
          return ((raw & (0xF << 8)) >> 8);
        }
        /**
          Sets Minute units in BCD format.
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setMNU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((((value)) << 8) & (0xF << 8));
          return *(Register*)this;
        }
        /**
          Gets Second tens in BCD format.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getST() volatile {
          return ((raw & (0x7 << 4)) >> 4);
        }
        /**
          Sets Second tens in BCD format.
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setST(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((((value)) << 4) & (0x7 << 4));
          return *(Register*)this;
        }
        /**
          Gets Second units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSU() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Second units in BCD format.
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setSU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      write protection register
    */
    namespace WPR {
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
          Gets Write protection key
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getKEY() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets Write protection key
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setKEY(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      sub second register
    */
    namespace SSR {
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
          Gets Sub second value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getSS() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Sub second value
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setSS(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      shift control register
    */
    namespace SHIFTR {
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
          Gets Add one second
          @return boolean value
        */
        __attribute__((always_inline)) bool getADD1S() volatile {
          return ((raw & (0x1 << 31)) >> 31);
        }
        /**
          Sets Add one second
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADD1S(bool value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((((value)) << 31) & (0x1 << 31));
          return *(Register*)this;
        }
        /**
          Gets Subtract a fraction of a second
          @return value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long getSUBFS() volatile {
          return ((raw & (0x7FFF << 0)) >> 0);
        }
        /**
          Sets Subtract a fraction of a second
          @param value value in range 0..32767
        */
        __attribute__((always_inline)) Register& setSUBFS(unsigned long value) volatile {
          raw = (raw & ~(0x7FFF << 0)) | ((((value)) << 0) & (0x7FFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      timestamp time register
    */
    namespace TSTR {
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
          Gets AM/PM notation
          @return boolean value
        */
        __attribute__((always_inline)) bool getPM() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets AM/PM notation
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPM(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
        /**
          Gets Hour tens in BCD format.
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getHT() volatile {
          return ((raw & (0x3 << 20)) >> 20);
        }
        /**
          Sets Hour tens in BCD format.
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setHT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((((value)) << 20) & (0x3 << 20));
          return *(Register*)this;
        }
        /**
          Gets Hour units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHU() volatile {
          return ((raw & (0xF << 16)) >> 16);
        }
        /**
          Sets Hour units in BCD format.
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setHU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((((value)) << 16) & (0xF << 16));
          return *(Register*)this;
        }
        /**
          Gets Minute tens in BCD format.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMNT() volatile {
          return ((raw & (0x7 << 12)) >> 12);
        }
        /**
          Sets Minute tens in BCD format.
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setMNT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((((value)) << 12) & (0x7 << 12));
          return *(Register*)this;
        }
        /**
          Gets Minute units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMNU() volatile {
          return ((raw & (0xF << 8)) >> 8);
        }
        /**
          Sets Minute units in BCD format.
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setMNU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((((value)) << 8) & (0xF << 8));
          return *(Register*)this;
        }
        /**
          Gets Second tens in BCD format.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getST() volatile {
          return ((raw & (0x7 << 4)) >> 4);
        }
        /**
          Sets Second tens in BCD format.
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setST(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((((value)) << 4) & (0x7 << 4));
          return *(Register*)this;
        }
        /**
          Gets Second units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSU() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Second units in BCD format.
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setSU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      timestamp date register
    */
    namespace TSDR {
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
          Gets Week day units
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getWDU() volatile {
          return ((raw & (0x7 << 13)) >> 13);
        }
        /**
          Sets Week day units
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setWDU(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 13)) | ((((value)) << 13) & (0x7 << 13));
          return *(Register*)this;
        }
        /**
          Gets Month tens in BCD format
          @return boolean value
        */
        __attribute__((always_inline)) bool getMT() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Month tens in BCD format
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMT(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Month units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMU() volatile {
          return ((raw & (0xF << 8)) >> 8);
        }
        /**
          Sets Month units in BCD format
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setMU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((((value)) << 8) & (0xF << 8));
          return *(Register*)this;
        }
        /**
          Gets Date tens in BCD format
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDT() volatile {
          return ((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Date tens in BCD format
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setDT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((((value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Date units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDU() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Date units in BCD format
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setDU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      time-stamp sub second register
    */
    namespace TSSSR {
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
          Gets Sub second value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getSS() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Sub second value
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setSS(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      calibration register
    */
    namespace CALR {
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
          Gets Use an 8-second calibration cycle period
          @return boolean value
        */
        __attribute__((always_inline)) bool getCALP() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Use an 8-second calibration cycle period
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCALP(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Use a 16-second calibration cycle period
          @return boolean value
        */
        __attribute__((always_inline)) bool getCALW8() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Use a 16-second calibration cycle period
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCALW8(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Use a 16-second calibration cycle period
          @return boolean value
        */
        __attribute__((always_inline)) bool getCALW16() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Use a 16-second calibration cycle period
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCALW16(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets Calibration minus
          @return value in range 0..511
        */
        __attribute__((always_inline)) unsigned long getCALM() volatile {
          return ((raw & (0x1FF << 0)) >> 0);
        }
        /**
          Sets Calibration minus
          @param value value in range 0..511
        */
        __attribute__((always_inline)) Register& setCALM(unsigned long value) volatile {
          raw = (raw & ~(0x1FF << 0)) | ((((value)) << 0) & (0x1FF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      tamper and alternate function configuration register
    */
    namespace TAFCR {
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
          Gets PC13 mode
          @param index in range 13..15
          @return boolean value
        */
        __attribute__((always_inline)) bool getPC_MODE(int index) volatile {
          return ((raw & (0x1 << (19 + 2 * (index - 13)))) >> (19 + 2 * (index - 13)));
        }
        /**
          Sets PC13 mode
          @param index in range 13..15
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPC_MODE(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (19 + 2 * (index - 13)))) | ((((value)) << (19 + 2 * (index - 13))) & (0x1 << (19 + 2 * (index - 13))));
          return *(Register*)this;
        }
        /**
          Gets RTC_ALARM output type/PC13 value
          @param index in range 13..15
          @return boolean value
        */
        __attribute__((always_inline)) bool getPC_VALUE(int index) volatile {
          return ((raw & (0x1 << (18 + 2 * (index - 13)))) >> (18 + 2 * (index - 13)));
        }
        /**
          Sets RTC_ALARM output type/PC13 value
          @param index in range 13..15
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPC_VALUE(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (18 + 2 * (index - 13)))) | ((((value)) << (18 + 2 * (index - 13))) & (0x1 << (18 + 2 * (index - 13))));
          return *(Register*)this;
        }
        /**
          Gets RTC_TAMP1 input detection enable
          @param index in range 1..2
          @return boolean value
        */
        __attribute__((always_inline)) bool getTAMP_E(int index) volatile {
          return ((raw & (0x1 << (0 + 3 * (index - 1)))) >> (0 + 3 * (index - 1)));
        }
        /**
          Sets RTC_TAMP1 input detection enable
          @param index in range 1..2
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTAMP_E(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 3 * (index - 1)))) | ((((value)) << (0 + 3 * (index - 1))) & (0x1 << (0 + 3 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets RTC_TAMPx pull-up disable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTAMP_PUDIS() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets RTC_TAMPx pull-up disable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTAMP_PUDIS(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets RTC_TAMPx precharge duration
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTAMP_PRCH() volatile {
          return ((raw & (0x3 << 13)) >> 13);
        }
        /**
          Sets RTC_TAMPx precharge duration
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setTAMP_PRCH(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 13)) | ((((value)) << 13) & (0x3 << 13));
          return *(Register*)this;
        }
        /**
          Gets RTC_TAMPx filter count
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTAMPFLT() volatile {
          return ((raw & (0x3 << 11)) >> 11);
        }
        /**
          Sets RTC_TAMPx filter count
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setTAMPFLT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 11)) | ((((value)) << 11) & (0x3 << 11));
          return *(Register*)this;
        }
        /**
          Gets Tamper sampling frequency
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTAMPFREQ() volatile {
          return ((raw & (0x7 << 8)) >> 8);
        }
        /**
          Sets Tamper sampling frequency
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setTAMPFREQ(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((((value)) << 8) & (0x7 << 8));
          return *(Register*)this;
        }
        /**
          Gets Activate timestamp on tamper detection event
          @return boolean value
        */
        __attribute__((always_inline)) bool getTAMPTS() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Activate timestamp on tamper detection event
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTAMPTS(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Active level for RTC_TAMP2 input
          @return boolean value
        */
        __attribute__((always_inline)) bool getTAMP2_TRG() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Active level for RTC_TAMP2 input
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTAMP2_TRG(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Tamper interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTAMPIE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Tamper interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTAMPIE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Active level for RTC_TAMP1 input
          @return boolean value
        */
        __attribute__((always_inline)) bool getTAMP1TRG() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Active level for RTC_TAMP1 input
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTAMP1TRG(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
      };
    };
    
    /**
      alarm A sub second register
    */
    namespace ALRMASSR {
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
          Gets Mask the most-significant bits starting at this bit
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMASKSS() volatile {
          return ((raw & (0xF << 24)) >> 24);
        }
        /**
          Sets Mask the most-significant bits starting at this bit
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setMASKSS(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((((value)) << 24) & (0xF << 24));
          return *(Register*)this;
        }
        /**
          Gets Sub seconds value
          @return value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long getSS() volatile {
          return ((raw & (0x7FFF << 0)) >> 0);
        }
        /**
          Sets Sub seconds value
          @param value value in range 0..32767
        */
        __attribute__((always_inline)) Register& setSS(unsigned long value) volatile {
          raw = (raw & ~(0x7FFF << 0)) | ((((value)) << 0) & (0x7FFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      backup register
    */
    namespace BKP0R {
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
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets BKP
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      backup register
    */
    namespace BKP1R {
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
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets BKP
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      backup register
    */
    namespace BKP2R {
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
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets BKP
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      backup register
    */
    namespace BKP3R {
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
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets BKP
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      backup register
    */
    namespace BKP4R {
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
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets BKP
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setBKP(unsigned long value) volatile {
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
            time register
          */
          TR::Register TR;
        };
        struct {
          char _space_DR[0x4];
          /**
            date register
          */
          DR::Register DR;
        };
        struct {
          char _space_CR[0x8];
          /**
            control register
          */
          CR::Register CR;
        };
        struct {
          char _space_ISR[0xc];
          /**
            initialization and status register
          */
          ISR::Register ISR;
        };
        struct {
          char _space_PRER[0x10];
          /**
            prescaler register
          */
          PRER::Register PRER;
        };
        struct {
          char _space_ALRMAR[0x1c];
          /**
            alarm A register
          */
          ALRMAR::Register ALRMAR;
        };
        struct {
          char _space_WPR[0x24];
          /**
            write protection register
          */
          WPR::Register WPR;
        };
        struct {
          char _space_SSR[0x28];
          /**
            sub second register
          */
          SSR::Register SSR;
        };
        struct {
          char _space_SHIFTR[0x2c];
          /**
            shift control register
          */
          SHIFTR::Register SHIFTR;
        };
        struct {
          char _space_TSTR[0x30];
          /**
            timestamp time register
          */
          TSTR::Register TSTR;
        };
        struct {
          char _space_TSDR[0x34];
          /**
            timestamp date register
          */
          TSDR::Register TSDR;
        };
        struct {
          char _space_TSSSR[0x38];
          /**
            time-stamp sub second register
          */
          TSSSR::Register TSSSR;
        };
        struct {
          char _space_CALR[0x3c];
          /**
            calibration register
          */
          CALR::Register CALR;
        };
        struct {
          char _space_TAFCR[0x40];
          /**
            tamper and alternate function configuration register
          */
          TAFCR::Register TAFCR;
        };
        struct {
          char _space_ALRMASSR[0x44];
          /**
            alarm A sub second register
          */
          ALRMASSR::Register ALRMASSR;
        };
        struct {
          char _space_BKP0R[0x50];
          /**
            backup register
          */
          BKP0R::Register BKP0R;
        };
        struct {
          char _space_BKP1R[0x54];
          /**
            backup register
          */
          BKP1R::Register BKP1R;
        };
        struct {
          char _space_BKP2R[0x58];
          /**
            backup register
          */
          BKP2R::Register BKP2R;
        };
        struct {
          char _space_BKP3R[0x5c];
          /**
            backup register
          */
          BKP3R::Register BKP3R;
        };
        struct {
          char _space_BKP4R[0x60];
          /**
            backup register
          */
          BKP4R::Register BKP4R;
        };
      };
    };
  }
  
  extern volatile rtc::Peripheral RTC;
}