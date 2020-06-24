namespace target {
  namespace i2c {
    
    /**
      Control register 1
    */
    namespace CR1 {
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
          Gets Peripheral enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPE() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Peripheral enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPE(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets TX Interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTXIE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets TX Interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTXIE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets RX Interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXIE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets RX Interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXIE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Address match interrupt enable (slave only)
          @return boolean value
        */
        __attribute__((always_inline)) bool getADDRIE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Address match interrupt enable (slave only)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADDRIE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Not acknowledge received interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getNACKIE() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Not acknowledge received interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNACKIE(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets STOP detection Interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTOPIE() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets STOP detection Interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTOPIE(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Transfer Complete interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCIE() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Transfer Complete interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCIE(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Error interrupts enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getERRIE() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Error interrupts enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setERRIE(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Digital noise filter
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDNF() volatile {
          return ((raw & (0xF << 8)) >> 8);
        }
        /**
          Sets Digital noise filter
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setDNF(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((((value)) << 8) & (0xF << 8));
          return *(Register*)this;
        }
        /**
          Gets Analog noise filter OFF
          @return boolean value
        */
        __attribute__((always_inline)) bool getANFOFF() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Analog noise filter OFF
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setANFOFF(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Software reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getSWRST() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Software reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSWRST(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets DMA transmission requests enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTXDMAEN() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets DMA transmission requests enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTXDMAEN(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets DMA reception requests enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXDMAEN() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets DMA reception requests enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXDMAEN(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Slave byte control
          @return boolean value
        */
        __attribute__((always_inline)) bool getSBC() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets Slave byte control
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSBC(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets Clock stretching disable
          @return boolean value
        */
        __attribute__((always_inline)) bool getNOSTRETCH() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets Clock stretching disable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNOSTRETCH(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets Wakeup from STOP enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getWUPEN() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets Wakeup from STOP enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWUPEN(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets General call enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getGCEN() volatile {
          return ((raw & (0x1 << 19)) >> 19);
        }
        /**
          Sets General call enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setGCEN(bool value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((((value)) << 19) & (0x1 << 19));
          return *(Register*)this;
        }
        /**
          Gets SMBus Host address enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSMBHEN() volatile {
          return ((raw & (0x1 << 20)) >> 20);
        }
        /**
          Sets SMBus Host address enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSMBHEN(bool value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((((value)) << 20) & (0x1 << 20));
          return *(Register*)this;
        }
        /**
          Gets SMBus Device Default address enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSMBDEN() volatile {
          return ((raw & (0x1 << 21)) >> 21);
        }
        /**
          Sets SMBus Device Default address enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSMBDEN(bool value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((((value)) << 21) & (0x1 << 21));
          return *(Register*)this;
        }
        /**
          Gets SMBUS alert enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getALERTEN() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets SMBUS alert enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setALERTEN(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
        /**
          Gets PEC enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPECEN() volatile {
          return ((raw & (0x1 << 23)) >> 23);
        }
        /**
          Sets PEC enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPECEN(bool value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((((value)) << 23) & (0x1 << 23));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Control register 2
    */
    namespace CR2 {
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
          Gets Slave address bit 0 (master mode)
          @param index in range 0..8
          @return boolean value
        */
        __attribute__((always_inline)) bool getSADD(int index) volatile {
          return ((raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0)));
        }
        /**
          Sets Slave address bit 0 (master mode)
          @param index in range 0..8
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSADD(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((((value)) << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
          return *(Register*)this;
        }
        /**
          Gets Packet error checking byte
          @return boolean value
        */
        __attribute__((always_inline)) bool getPECBYTE() volatile {
          return ((raw & (0x1 << 26)) >> 26);
        }
        /**
          Sets Packet error checking byte
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPECBYTE(bool value) volatile {
          raw = (raw & ~(0x1 << 26)) | ((((value)) << 26) & (0x1 << 26));
          return *(Register*)this;
        }
        /**
          Gets Automatic end mode (master mode)
          @return boolean value
        */
        __attribute__((always_inline)) bool getAUTOEND() volatile {
          return ((raw & (0x1 << 25)) >> 25);
        }
        /**
          Sets Automatic end mode (master mode)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAUTOEND(bool value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((((value)) << 25) & (0x1 << 25));
          return *(Register*)this;
        }
        /**
          Gets NBYTES reload mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getRELOAD() volatile {
          return ((raw & (0x1 << 24)) >> 24);
        }
        /**
          Sets NBYTES reload mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRELOAD(bool value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((((value)) << 24) & (0x1 << 24));
          return *(Register*)this;
        }
        /**
          Gets Number of bytes
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getNBYTES() volatile {
          return ((raw & (0xFF << 16)) >> 16);
        }
        /**
          Sets Number of bytes
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setNBYTES(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((((value)) << 16) & (0xFF << 16));
          return *(Register*)this;
        }
        /**
          Gets NACK generation (slave mode)
          @return boolean value
        */
        __attribute__((always_inline)) bool getNACK() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets NACK generation (slave mode)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNACK(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Stop generation (master mode)
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTOP() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Stop generation (master mode)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTOP(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Start generation
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTART() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Start generation
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTART(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets 10-bit address header only read direction (master receiver mode)
          @return boolean value
        */
        __attribute__((always_inline)) bool getHEAD10R() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets 10-bit address header only read direction (master receiver mode)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHEAD10R(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets 10-bit addressing mode (master mode)
          @return boolean value
        */
        __attribute__((always_inline)) bool getADD10() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets 10-bit addressing mode (master mode)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADD10(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Transfer direction (master mode)
          @return boolean value
        */
        __attribute__((always_inline)) bool getRD_WRN() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets Transfer direction (master mode)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRD_WRN(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Own address register 1
    */
    namespace OAR1 {
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
          Gets Interface address
          @return boolean value
        */
        __attribute__((always_inline)) bool getOA1_0() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Interface address
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOA1_0(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Interface address
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getOA1_1() volatile {
          return ((raw & (0x7F << 1)) >> 1);
        }
        /**
          Sets Interface address
          @param value value in range 0..127
        */
        __attribute__((always_inline)) Register& setOA1_1(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 1)) | ((((value)) << 1) & (0x7F << 1));
          return *(Register*)this;
        }
        /**
          Gets Interface address
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOA1_8() volatile {
          return ((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Interface address
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setOA1_8(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((((value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Own Address 1 10-bit mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getOA1MODE() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets Own Address 1 10-bit mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOA1MODE(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets Own Address 1 enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOA1EN() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Own Address 1 enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOA1EN(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Own address register 2
    */
    namespace OAR2 {
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
          Gets Interface address
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getOA2() volatile {
          return ((raw & (0x7F << 1)) >> 1);
        }
        /**
          Sets Interface address
          @param value value in range 0..127
        */
        __attribute__((always_inline)) Register& setOA2(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 1)) | ((((value)) << 1) & (0x7F << 1));
          return *(Register*)this;
        }
        /**
          Gets Own Address 2 masks
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getOA2MSK() volatile {
          return ((raw & (0x7 << 8)) >> 8);
        }
        /**
          Sets Own Address 2 masks
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setOA2MSK(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((((value)) << 8) & (0x7 << 8));
          return *(Register*)this;
        }
        /**
          Gets Own Address 2 enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOA2EN() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Own Address 2 enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOA2EN(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Timing register
    */
    namespace TIMINGR {
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
          Gets SCL low period (master mode)
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getSCLL() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets SCL low period (master mode)
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setSCLL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
        /**
          Gets SCL high period (master mode)
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getSCLH() volatile {
          return ((raw & (0xFF << 8)) >> 8);
        }
        /**
          Sets SCL high period (master mode)
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setSCLH(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((((value)) << 8) & (0xFF << 8));
          return *(Register*)this;
        }
        /**
          Gets Data hold time
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSDADEL() volatile {
          return ((raw & (0xF << 16)) >> 16);
        }
        /**
          Sets Data hold time
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setSDADEL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((((value)) << 16) & (0xF << 16));
          return *(Register*)this;
        }
        /**
          Gets Data setup time
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSCLDEL() volatile {
          return ((raw & (0xF << 20)) >> 20);
        }
        /**
          Sets Data setup time
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setSCLDEL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 20)) | ((((value)) << 20) & (0xF << 20));
          return *(Register*)this;
        }
        /**
          Gets Timing prescaler
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPRESC() volatile {
          return ((raw & (0xF << 28)) >> 28);
        }
        /**
          Sets Timing prescaler
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setPRESC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 28)) | ((((value)) << 28) & (0xF << 28));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Status register 1
    */
    namespace TIMEOUTR {
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
          Gets Bus timeout A
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getTIMEOUTA() volatile {
          return ((raw & (0xFFF << 0)) >> 0);
        }
        /**
          Sets Bus timeout A
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setTIMEOUTA(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((((value)) << 0) & (0xFFF << 0));
          return *(Register*)this;
        }
        /**
          Gets Idle clock timeout detection
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIDLE() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Idle clock timeout detection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIDLE(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Clock timeout enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIMOUTEN() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Clock timeout enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIMOUTEN(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Bus timeout B
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getTIMEOUTB() volatile {
          return ((raw & (0xFFF << 16)) >> 16);
        }
        /**
          Sets Bus timeout B
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setTIMEOUTB(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 16)) | ((((value)) << 16) & (0xFFF << 16));
          return *(Register*)this;
        }
        /**
          Gets Extended clock timeout enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTEXTEN() volatile {
          return ((raw & (0x1 << 31)) >> 31);
        }
        /**
          Sets Extended clock timeout enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTEXTEN(bool value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((((value)) << 31) & (0x1 << 31));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt and Status register
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
          Gets Address match code (Slave mode)
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getADDCODE() volatile {
          return ((raw & (0x7F << 17)) >> 17);
        }
        /**
          Sets Address match code (Slave mode)
          @param value value in range 0..127
        */
        __attribute__((always_inline)) Register& setADDCODE(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 17)) | ((((value)) << 17) & (0x7F << 17));
          return *(Register*)this;
        }
        /**
          Gets Transfer direction (Slave mode)
          @return boolean value
        */
        __attribute__((always_inline)) bool getDIR() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets Transfer direction (Slave mode)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDIR(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets Bus busy
          @return boolean value
        */
        __attribute__((always_inline)) bool getBUSY() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Bus busy
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBUSY(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets SMBus alert
          @return boolean value
        */
        __attribute__((always_inline)) bool getALERT() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets SMBus alert
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setALERT(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets Timeout or t_low detection flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIMEOUT() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Timeout or t_low detection flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIMEOUT(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets PEC Error in reception
          @return boolean value
        */
        __attribute__((always_inline)) bool getPECERR() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets PEC Error in reception
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPECERR(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Overrun/Underrun (slave mode)
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVR() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets Overrun/Underrun (slave mode)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVR(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets Arbitration lost
          @return boolean value
        */
        __attribute__((always_inline)) bool getARLO() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Arbitration lost
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setARLO(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Bus error
          @return boolean value
        */
        __attribute__((always_inline)) bool getBERR() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Bus error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBERR(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Transfer Complete Reload
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCR() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Transfer Complete Reload
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCR(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Transfer Complete (master mode)
          @return boolean value
        */
        __attribute__((always_inline)) bool getTC() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Transfer Complete (master mode)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTC(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Stop detection flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTOPF() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Stop detection flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTOPF(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Not acknowledge received flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getNACKF() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Not acknowledge received flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNACKF(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Address matched (slave mode)
          @return boolean value
        */
        __attribute__((always_inline)) bool getADDR() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Address matched (slave mode)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADDR(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Receive data register not empty (receivers)
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXNE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Receive data register not empty (receivers)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXNE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Transmit interrupt status (transmitters)
          @return boolean value
        */
        __attribute__((always_inline)) bool getTXIS() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Transmit interrupt status (transmitters)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTXIS(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Transmit data register empty (transmitters)
          @return boolean value
        */
        __attribute__((always_inline)) bool getTXE() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Transmit data register empty (transmitters)
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTXE(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt clear register
    */
    namespace ICR {
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
          Gets Alert flag clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getALERTCF() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Alert flag clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setALERTCF(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets Timeout detection flag clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIMOUTCF() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Timeout detection flag clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIMOUTCF(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets PEC Error flag clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getPECCF() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets PEC Error flag clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPECCF(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Overrun/Underrun flag clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVRCF() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets Overrun/Underrun flag clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVRCF(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets Arbitration lost flag clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getARLOCF() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Arbitration lost flag clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setARLOCF(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Bus error flag clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getBERRCF() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Bus error flag clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBERRCF(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Stop detection flag clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTOPCF() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Stop detection flag clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTOPCF(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Not Acknowledge flag clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getNACKCF() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Not Acknowledge flag clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNACKCF(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Address Matched flag clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getADDRCF() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Address Matched flag clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADDRCF(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
      };
    };
    
    /**
      PEC register
    */
    namespace PECR {
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
          Gets Packet error checking register
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPEC() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets Packet error checking register
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setPEC(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Receive data register
    */
    namespace RXDR {
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
          Gets 8-bit receive data
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getRXDATA() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets 8-bit receive data
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setRXDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Transmit data register
    */
    namespace TXDR {
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
          Gets 8-bit transmit data
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getTXDATA() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets 8-bit transmit data
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setTXDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Control register 1
          */
          CR1::Register CR1;
        };
        struct {
          char _space_CR2[0x4];
          /**
            Control register 2
          */
          CR2::Register CR2;
        };
        struct {
          char _space_OAR1[0x8];
          /**
            Own address register 1
          */
          OAR1::Register OAR1;
        };
        struct {
          char _space_OAR2[0xc];
          /**
            Own address register 2
          */
          OAR2::Register OAR2;
        };
        struct {
          char _space_TIMINGR[0x10];
          /**
            Timing register
          */
          TIMINGR::Register TIMINGR;
        };
        struct {
          char _space_TIMEOUTR[0x14];
          /**
            Status register 1
          */
          TIMEOUTR::Register TIMEOUTR;
        };
        struct {
          char _space_ISR[0x18];
          /**
            Interrupt and Status register
          */
          ISR::Register ISR;
        };
        struct {
          char _space_ICR[0x1c];
          /**
            Interrupt clear register
          */
          ICR::Register ICR;
        };
        struct {
          char _space_PECR[0x20];
          /**
            PEC register
          */
          PECR::Register PECR;
        };
        struct {
          char _space_RXDR[0x24];
          /**
            Receive data register
          */
          RXDR::Register RXDR;
        };
        struct {
          char _space_TXDR[0x28];
          /**
            Transmit data register
          */
          TXDR::Register TXDR;
        };
      };
    };
  }
  
  extern volatile i2c::Peripheral I2C1;
  extern volatile i2c::Peripheral I2C2;
}