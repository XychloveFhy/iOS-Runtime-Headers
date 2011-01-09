/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMXPathResult : DOMObject 
{
}

@property(readonly) unsigned short resultType;
@property(readonly) double numberValue;
@property(copy,readonly) NSString *stringValue;
@property(readonly) BOOL booleanValue;
@property(retain,readonly) DOMNode *singleNodeValue;
@property(readonly) BOOL invalidIteratorState;
@property(readonly) NSUInteger snapshotLength;


- (id)iterateNext;
- (BOOL)invalidIteratorState;
- (id)singleNodeValue;
- (BOOL)booleanValue;
- (double)numberValue;
- (unsigned short)resultType;
- (NSUInteger)snapshotLength;
- (id)snapshotItem:(NSUInteger)arg1;
- (void)finalize;
- (id)stringValue;
- (void)dealloc;

@end
