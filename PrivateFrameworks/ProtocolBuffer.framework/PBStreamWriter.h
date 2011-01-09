/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSOutputStream;



@interface PBStreamWriter : PBDataWriter 
{
    NSOutputStream *_stream;
}

@property(retain) NSOutputStream *stream;

+ (id)writeProtoBuffers:(id)arg1 toFile:(id)arg2;

- (NSInteger)write:(char *)arg1 maxLength:(NSUInteger)arg2;
- (id)stream;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;
- (void)setStream:(id)arg1;

@end
