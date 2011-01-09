/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableString;



@interface MFMimeEnrichedReader : NSObject 
{
    struct { 
        unsigned short buffer[64]; 
        struct __CFString {} *theString; 
        unsigned short *directBuffer; 
        struct { 
            NSInteger location; 
            NSInteger length; 
        } rangeToBuffer; 
        NSInteger bufferedRangeStart; 
        NSInteger bufferedRangeEnd; 
    } _inputBuffer;
    NSInteger _currentIndex;
    NSInteger _inputLength;
    unsigned int _noFillLevel : 30;
    unsigned int _eatOneNewline : 1;
    unsigned int _insideComment : 1;
    unsigned int _wantsPlainText : 1;
    NSInteger _lastQuoteLevel;
    struct __CFArray { } *_commandStack;
    id _outputString;
    NSMutableString *_outputBuffer;
    struct __CFString { } *_prependHTML;
    struct __CFString { } *_postpendHTML;
    float _indentWidth;
}

+ (struct __CFCharacterSet { }*)punctuationSet;
+ (struct __CFCharacterSet { }*)parenSet;

- (void)setWantsHTML:(BOOL)arg1;
- (void)mismatchError:(id)arg1;
- (void)appendStringToBuffer:(id)arg1;
- (void)resetStateWithString:(id)arg1 outputString:(id)arg2;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (void)closeUpQuoting;
- (void)handleNoParameterCommand:(const struct { id x1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 2; }*)arg1;
- (void)setupFontStackEntry:(struct _CommandStackEntry { struct { /* ? */ } *x1; id x2; }*)arg1;
- (void)beginCommand:(id)arg1;
- (void)endCommand:(id)arg1;
- (void)parseParameterString:(id)arg1;
- (id)currentFont;
- (void)appendNewLine:(id)arg1;
- (NSInteger)readTokenInto:(id*)arg1;
- (void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2;
- (void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2;
- (id)description;
- (void)dealloc;

@end
