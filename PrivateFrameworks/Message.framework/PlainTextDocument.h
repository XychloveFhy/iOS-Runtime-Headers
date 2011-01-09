/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray, NSMutableString;



@interface PlainTextDocument : NSObject 
{
    NSMutableString *_text;
    NSMutableArray *_fragments;
}


- (void)appendString:(id)arg1 withQuoteLevel:(NSUInteger)arg2;
- (id)archivedRepresentation;
- (void)appendArchivedRepresentation:(id)arg1;
- (NSUInteger)fragmentCount;
- (void)getString:(id*)arg1 quoteLevel:(NSUInteger*)arg2 ofFragmentAtIndex:(NSInteger)arg3;
- (void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(BOOL*)arg2 encoding:(unsigned long)arg3;
- (id)quotedString:(unsigned long)arg1;
- (id)string;
- (void)dealloc;

@end
