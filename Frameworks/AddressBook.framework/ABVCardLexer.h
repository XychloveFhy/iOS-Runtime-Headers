/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSMutableData, NSArray;



@interface ABVCardLexer : NSObject 
{
    NSMutableData *_data;
    char *_bytes;
    NSUInteger _length;
    NSUInteger _peakedPoint;
    NSUInteger _cursor;
    BOOL _unicode;
    NSInteger _errorCount;
    NSArray *_activeTokenSets;
}


- (id)tokenName:(NSInteger)arg1;
- (NSInteger)errorCount;
- (id)tokenSetForLength:(NSInteger)arg1;
- (NSInteger)nextTokenPeakSingle:(BOOL)arg1 length:(NSInteger)arg2;
- (NSInteger)nextTokenPeakUnicode:(BOOL)arg1 length:(NSInteger)arg2;
- (NSInteger)nextTokenPeak:(BOOL)arg1;
- (id)nextQuotedPrintableData;
- (id)nextEscapedCharacter;
- (id)nextSingleByteStringInEncoding:(NSUInteger)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(NSInteger)arg3 trim:(BOOL)arg4;
- (id)nextUnicodeStringStopTokens:(NSInteger)arg1 quotedPrintable:(BOOL)arg2 trim:(BOOL)arg3;
- (id)nextStringInEncoding:(NSUInteger)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(NSInteger)arg3 trim:(BOOL)arg4;
- (NSInteger)tokenAtCursor;
- (id)nextArraySeperatedByToken:(NSInteger)arg1 stoppingAt:(NSInteger)arg2 inEncoding:(NSUInteger)arg3;
- (id)nextUnicodeBase64Line:(BOOL*)arg1;
- (id)nextSingleByteBase64Line:(BOOL*)arg1;
- (id)nextBase64Line:(BOOL*)arg1;
- (id)nextBase64Data;
- (void)advanceToPeakPoint;
- (NSInteger)advanceToUnicodeString;
- (NSInteger)advanceToSingleByteString;
- (NSInteger)advanceToString;
- (BOOL)advanceToToken:(NSInteger)arg1 throughTypes:(NSInteger)arg2;
- (BOOL)advanceToEOLUnicode;
- (BOOL)advanceToEOLSingle;
- (BOOL)advanceToEOL;
- (BOOL)advancePastEOLUnicode;
- (BOOL)advancePastEOLSingle;
- (BOOL)advancePastEOL;
- (BOOL)atEOF;
- (NSUInteger)cursor;
- (void)finalize;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
