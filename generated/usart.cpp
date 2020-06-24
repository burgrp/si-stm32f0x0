namespace target {
  namespace usart {
    
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
          Gets USART enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getUE() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets USART enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUE(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets USART enable in Stop mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getUESM() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets USART enable in Stop mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUESM(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Receiver enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Receiver enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Transmitter enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Transmitter enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets IDLE interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getIDLEIE() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets IDLE interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIDLEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets RXNE interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXNEIE() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets RXNE interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXNEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Transmission complete interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCIE() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Transmission complete interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCIE(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTXEIE() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTXEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets PE interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPEIE() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets PE interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Parity selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getPS() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Parity selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPS(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Parity control enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPCE() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets Parity control enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPCE(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets Receiver wakeup method
          @return boolean value
        */
        __attribute__((always_inline)) bool getWAKE() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Receiver wakeup method
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWAKE(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Word length
          @return boolean value
        */
        __attribute__((always_inline)) bool getM() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Word length
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setM(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Mute mode enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getMME() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Mute mode enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMME(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets Character match interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCMIE() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Character match interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCMIE(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Oversampling mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVER8() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Oversampling mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVER8(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Driver Enable deassertion time
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDEDT() volatile {
          return ((raw & (0x1F << 16)) >> 16);
        }
        /**
          Sets Driver Enable deassertion time
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setDEDT(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 16)) | ((((value)) << 16) & (0x1F << 16));
          return *(Register*)this;
        }
        /**
          Gets Driver Enable assertion time
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDEAT() volatile {
          return ((raw & (0x1F << 21)) >> 21);
        }
        /**
          Sets Driver Enable assertion time
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setDEAT(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 21)) | ((((value)) << 21) & (0x1F << 21));
          return *(Register*)this;
        }
        /**
          Gets Receiver timeout interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRTOIE() volatile {
          return ((raw & (0x1 << 26)) >> 26);
        }
        /**
          Sets Receiver timeout interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRTOIE(bool value) volatile {
          raw = (raw & ~(0x1 << 26)) | ((((value)) << 26) & (0x1 << 26));
          return *(Register*)this;
        }
        /**
          Gets End of Block interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEOBIE() volatile {
          return ((raw & (0x1 << 27)) >> 27);
        }
        /**
          Sets End of Block interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEOBIE(bool value) volatile {
          raw = (raw & ~(0x1 << 27)) | ((((value)) << 27) & (0x1 << 27));
          return *(Register*)this;
        }
        /**
          Gets Word length
          @return boolean value
        */
        __attribute__((always_inline)) bool getM1() volatile {
          return ((raw & (0x1 << 28)) >> 28);
        }
        /**
          Sets Word length
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setM1(bool value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((((value)) << 28) & (0x1 << 28));
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
          Gets Address of the USART node
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getADD4() volatile {
          return ((raw & (0xF << 28)) >> 28);
        }
        /**
          Sets Address of the USART node
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setADD4(unsigned long value) volatile {
          raw = (raw & ~(0xF << 28)) | ((((value)) << 28) & (0xF << 28));
          return *(Register*)this;
        }
        /**
          Gets Address of the USART node
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getADD0() volatile {
          return ((raw & (0xF << 24)) >> 24);
        }
        /**
          Sets Address of the USART node
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setADD0(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((((value)) << 24) & (0xF << 24));
          return *(Register*)this;
        }
        /**
          Gets Receiver timeout enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRTOEN() volatile {
          return ((raw & (0x1 << 23)) >> 23);
        }
        /**
          Sets Receiver timeout enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRTOEN(bool value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((((value)) << 23) & (0x1 << 23));
          return *(Register*)this;
        }
        /**
          Gets Auto baud rate mode
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getABRMOD() volatile {
          return ((raw & (0x3 << 21)) >> 21);
        }
        /**
          Sets Auto baud rate mode
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setABRMOD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 21)) | ((((value)) << 21) & (0x3 << 21));
          return *(Register*)this;
        }
        /**
          Gets Auto baud rate enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getABREN() volatile {
          return ((raw & (0x1 << 20)) >> 20);
        }
        /**
          Sets Auto baud rate enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setABREN(bool value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((((value)) << 20) & (0x1 << 20));
          return *(Register*)this;
        }
        /**
          Gets Most significant bit first
          @return boolean value
        */
        __attribute__((always_inline)) bool getMSBFIRST() volatile {
          return ((raw & (0x1 << 19)) >> 19);
        }
        /**
          Sets Most significant bit first
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMSBFIRST(bool value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((((value)) << 19) & (0x1 << 19));
          return *(Register*)this;
        }
        /**
          Gets Binary data inversion
          @return boolean value
        */
        __attribute__((always_inline)) bool getDATAINV() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets Binary data inversion
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDATAINV(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets TX pin active level inversion
          @return boolean value
        */
        __attribute__((always_inline)) bool getTXINV() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets TX pin active level inversion
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTXINV(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets RX pin active level inversion
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXINV() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets RX pin active level inversion
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXINV(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets Swap TX/RX pins
          @return boolean value
        */
        __attribute__((always_inline)) bool getSWAP() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Swap TX/RX pins
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSWAP(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets LIN mode enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getLINEN() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets LIN mode enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLINEN(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets STOP bits
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTOP() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets STOP bits
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTOP(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCLKEN() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCLKEN(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Clock polarity
          @return boolean value
        */
        __attribute__((always_inline)) bool getCPOL() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets Clock polarity
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCPOL(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets Clock phase
          @return boolean value
        */
        __attribute__((always_inline)) bool getCPHA() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Clock phase
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCPHA(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Last bit clock pulse
          @return boolean value
        */
        __attribute__((always_inline)) bool getLBCL() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Last bit clock pulse
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLBCL(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets LIN break detection interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getLBDIE() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets LIN break detection interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLBDIE(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets LIN break detection length
          @return boolean value
        */
        __attribute__((always_inline)) bool getLBDL() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets LIN break detection length
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLBDL(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets 7-bit Address Detection/4-bit Address Detection
          @return boolean value
        */
        __attribute__((always_inline)) bool getADDM7() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets 7-bit Address Detection/4-bit Address Detection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADDM7(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Control register 3
    */
    namespace CR3 {
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
          Gets Wakeup from Stop mode interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getWUFIE() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets Wakeup from Stop mode interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWUFIE(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
        /**
          Gets Wakeup from Stop mode interrupt flag selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getWUS() volatile {
          return ((raw & (0x3 << 20)) >> 20);
        }
        /**
          Sets Wakeup from Stop mode interrupt flag selection
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setWUS(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((((value)) << 20) & (0x3 << 20));
          return *(Register*)this;
        }
        /**
          Gets Smartcard auto-retry count
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getSCARCNT() volatile {
          return ((raw & (0x7 << 17)) >> 17);
        }
        /**
          Sets Smartcard auto-retry count
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setSCARCNT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 17)) | ((((value)) << 17) & (0x7 << 17));
          return *(Register*)this;
        }
        /**
          Gets Driver enable polarity selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getDEP() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Driver enable polarity selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDEP(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Driver enable mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getDEM() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Driver enable mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDEM(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets DMA Disable on Reception Error
          @return boolean value
        */
        __attribute__((always_inline)) bool getDDRE() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets DMA Disable on Reception Error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDDRE(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets Overrun Disable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOVRDIS() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Overrun Disable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOVRDIS(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets One sample bit method enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getONEBIT() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets One sample bit method enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setONEBIT(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets CTS interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTSIE() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets CTS interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTSIE(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets CTS enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTSE() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets CTS enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTSE(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets RTS enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRTSE() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets RTS enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRTSE(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets DMA enable transmitter
          @return boolean value
        */
        __attribute__((always_inline)) bool getDMAT() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets DMA enable transmitter
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDMAT(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets DMA enable receiver
          @return boolean value
        */
        __attribute__((always_inline)) bool getDMAR() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets DMA enable receiver
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDMAR(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Smartcard mode enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSCEN() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Smartcard mode enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSCEN(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Smartcard NACK enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getNACK() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Smartcard NACK enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNACK(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Half-duplex selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getHDSEL() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Half-duplex selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHDSEL(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets IrDA low-power
          @return boolean value
        */
        __attribute__((always_inline)) bool getIRLP() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets IrDA low-power
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIRLP(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets IrDA mode enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getIREN() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets IrDA mode enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIREN(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Error interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEIE() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Error interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Baud rate register
    */
    namespace BRR {
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
          Gets mantissa of USARTDIV
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDIV_Mantissa() volatile {
          return ((raw & (0xFFF << 4)) >> 4);
        }
        /**
          Sets mantissa of USARTDIV
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setDIV_Mantissa(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 4)) | ((((value)) << 4) & (0xFFF << 4));
          return *(Register*)this;
        }
        /**
          Gets fraction of USARTDIV
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDIV_Fraction() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets fraction of USARTDIV
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setDIV_Fraction(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Guard time and prescaler register
    */
    namespace GTPR {
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
          Gets Guard time value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getGT() volatile {
          return ((raw & (0xFF << 8)) >> 8);
        }
        /**
          Sets Guard time value
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setGT(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((((value)) << 8) & (0xFF << 8));
          return *(Register*)this;
        }
        /**
          Gets Prescaler value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPSC() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets Prescaler value
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setPSC(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Receiver timeout register
    */
    namespace RTOR {
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
          Gets Block Length
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getBLEN() volatile {
          return ((raw & (0xFF << 24)) >> 24);
        }
        /**
          Sets Block Length
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setBLEN(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((((value)) << 24) & (0xFF << 24));
          return *(Register*)this;
        }
        /**
          Gets Receiver timeout value
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getRTO() volatile {
          return ((raw & (0xFFFFFF << 0)) >> 0);
        }
        /**
          Sets Receiver timeout value
          @param value value in range 0..16777215
        */
        __attribute__((always_inline)) Register& setRTO(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Request register
    */
    namespace RQR {
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
          Gets Transmit data flush request
          @return boolean value
        */
        __attribute__((always_inline)) bool getTXFRQ() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Transmit data flush request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTXFRQ(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Receive data flush request
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXFRQ() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Receive data flush request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXFRQ(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Mute mode request
          @return boolean value
        */
        __attribute__((always_inline)) bool getMMRQ() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Mute mode request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMMRQ(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Send break request
          @return boolean value
        */
        __attribute__((always_inline)) bool getSBKRQ() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Send break request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSBKRQ(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Auto baud rate request
          @return boolean value
        */
        __attribute__((always_inline)) bool getABRRQ() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Auto baud rate request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setABRRQ(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt & status register
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
          Gets Receive enable acknowledge flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getREACK() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets Receive enable acknowledge flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setREACK(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
        /**
          Gets Transmit enable acknowledge flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getTEACK() volatile {
          return ((raw & (0x1 << 21)) >> 21);
        }
        /**
          Sets Transmit enable acknowledge flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTEACK(bool value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((((value)) << 21) & (0x1 << 21));
          return *(Register*)this;
        }
        /**
          Gets Wakeup from Stop mode flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getWUF() volatile {
          return ((raw & (0x1 << 20)) >> 20);
        }
        /**
          Sets Wakeup from Stop mode flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWUF(bool value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((((value)) << 20) & (0x1 << 20));
          return *(Register*)this;
        }
        /**
          Gets Receiver wakeup from Mute mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getRWU() volatile {
          return ((raw & (0x1 << 19)) >> 19);
        }
        /**
          Sets Receiver wakeup from Mute mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRWU(bool value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((((value)) << 19) & (0x1 << 19));
          return *(Register*)this;
        }
        /**
          Gets Send break flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getSBKF() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets Send break flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSBKF(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets character match flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getCMF() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets character match flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCMF(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets Busy flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getBUSY() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets Busy flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBUSY(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets Auto baud rate flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getABRF() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Auto baud rate flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setABRF(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Auto baud rate error
          @return boolean value
        */
        __attribute__((always_inline)) bool getABRE() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Auto baud rate error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setABRE(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets End of block flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getEOBF() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets End of block flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEOBF(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Receiver timeout
          @return boolean value
        */
        __attribute__((always_inline)) bool getRTOF() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Receiver timeout
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRTOF(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets CTS flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTS() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets CTS flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTS(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets CTS interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTSIF() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets CTS interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTSIF(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets LIN break detection flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getLBDF() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets LIN break detection flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLBDF(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Transmit data register empty
          @return boolean value
        */
        __attribute__((always_inline)) bool getTXE() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Transmit data register empty
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTXE(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Transmission complete
          @return boolean value
        */
        __attribute__((always_inline)) bool getTC() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Transmission complete
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTC(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Read data register not empty
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXNE() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Read data register not empty
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXNE(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Idle line detected
          @return boolean value
        */
        __attribute__((always_inline)) bool getIDLE() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Idle line detected
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIDLE(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Overrun error
          @return boolean value
        */
        __attribute__((always_inline)) bool getORE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Overrun error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setORE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Noise detected flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getNF() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Noise detected flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNF(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Framing error
          @return boolean value
        */
        __attribute__((always_inline)) bool getFE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Framing error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Parity error
          @return boolean value
        */
        __attribute__((always_inline)) bool getPE() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Parity error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPE(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt flag clear register
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
          Gets Wakeup from Stop mode clear flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getWUCF() volatile {
          return ((raw & (0x1 << 20)) >> 20);
        }
        /**
          Sets Wakeup from Stop mode clear flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWUCF(bool value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((((value)) << 20) & (0x1 << 20));
          return *(Register*)this;
        }
        /**
          Gets Character match clear flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getCMCF() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets Character match clear flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCMCF(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets End of timeout clear flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getEOBCF() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets End of timeout clear flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEOBCF(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Receiver timeout clear flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getRTOCF() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Receiver timeout clear flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRTOCF(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets CTS clear flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTSCF() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets CTS clear flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTSCF(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets LIN break detection clear flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getLBDCF() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets LIN break detection clear flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLBDCF(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Transmission complete clear flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCCF() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Transmission complete clear flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCCF(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Idle line detected clear flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getIDLECF() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Idle line detected clear flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIDLECF(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Overrun error clear flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getORECF() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Overrun error clear flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setORECF(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Noise detected clear flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getNCF() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Noise detected clear flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNCF(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Framing error clear flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getFECF() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Framing error clear flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFECF(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Parity error clear flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getPECF() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Parity error clear flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPECF(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Receive data register
    */
    namespace RDR {
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
          Gets Receive data value
          @return value in range 0..511
        */
        __attribute__((always_inline)) unsigned long getRDR() volatile {
          return ((raw & (0x1FF << 0)) >> 0);
        }
        /**
          Sets Receive data value
          @param value value in range 0..511
        */
        __attribute__((always_inline)) Register& setRDR(unsigned long value) volatile {
          raw = (raw & ~(0x1FF << 0)) | ((((value)) << 0) & (0x1FF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Transmit data register
    */
    namespace TDR {
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
          Gets Transmit data value
          @return value in range 0..511
        */
        __attribute__((always_inline)) unsigned long getTDR() volatile {
          return ((raw & (0x1FF << 0)) >> 0);
        }
        /**
          Sets Transmit data value
          @param value value in range 0..511
        */
        __attribute__((always_inline)) Register& setTDR(unsigned long value) volatile {
          raw = (raw & ~(0x1FF << 0)) | ((((value)) << 0) & (0x1FF << 0));
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
          char _space_CR3[0x8];
          /**
            Control register 3
          */
          CR3::Register CR3;
        };
        struct {
          char _space_BRR[0xc];
          /**
            Baud rate register
          */
          BRR::Register BRR;
        };
        struct {
          char _space_GTPR[0x10];
          /**
            Guard time and prescaler register
          */
          GTPR::Register GTPR;
        };
        struct {
          char _space_RTOR[0x14];
          /**
            Receiver timeout register
          */
          RTOR::Register RTOR;
        };
        struct {
          char _space_RQR[0x18];
          /**
            Request register
          */
          RQR::Register RQR;
        };
        struct {
          char _space_ISR[0x1c];
          /**
            Interrupt & status register
          */
          ISR::Register ISR;
        };
        struct {
          char _space_ICR[0x20];
          /**
            Interrupt flag clear register
          */
          ICR::Register ICR;
        };
        struct {
          char _space_RDR[0x24];
          /**
            Receive data register
          */
          RDR::Register RDR;
        };
        struct {
          char _space_TDR[0x28];
          /**
            Transmit data register
          */
          TDR::Register TDR;
        };
      };
    };
  }
  
  extern volatile usart::Peripheral USART1;
  extern volatile usart::Peripheral USART2;
  extern volatile usart::Peripheral USART3;
  extern volatile usart::Peripheral USART4;
  extern volatile usart::Peripheral USART6;
  extern volatile usart::Peripheral USART5;
}