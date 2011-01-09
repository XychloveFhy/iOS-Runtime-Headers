/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSInputStream;



@interface PBStreamReader : PBDataReader 
{
    NSInputStream *_stream;
}

@property(retain) NSInputStream *stream;

+ (id)readProtoBuffersOfClass:(Class)arg1 fromFile:(id)arg2 error:(id*)arg3;

- (NSInteger)read:(char *)arg1 maxLength:(NSUInteger)arg2;
- (id)readBytes:(NSUInteger)arg1;
- (id)initWithStream:(id)arg1;
- (BOOL)seekToOffset:(NSUInteger)arg1;
- (id)stream;
- (void)dealloc;
- (void)setStream:(id)arg1;
- (id)readProtoBuffer;

@end
