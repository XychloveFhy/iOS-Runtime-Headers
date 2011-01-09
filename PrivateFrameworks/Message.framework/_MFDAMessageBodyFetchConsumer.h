/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFDAStreamingContentConsumer>, MFError, NSData;



@interface _MFDAMessageBodyFetchConsumer : NSObject <MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory>
{
    <MFDAStreamingContentConsumer> *_streamConsumer;
    BOOL _succeeded;
    MFError *_error;
    NSData *_data;
}

@property(retain) NSData *data;
@property(readonly) BOOL succeeded;
@property(retain) MFError *error;
@property(retain) <MFDAStreamingContentConsumer> *streamConsumer;


- (id)error;
- (void)setData:(id)arg1;
- (BOOL)wantsData;
- (BOOL)succeeded;
- (id)streamingContentConsumer;
- (id)streamConsumer;
- (void)setStreamConsumer:(id)arg1;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (id)data;
- (void)dealloc;
- (void)setError:(id)arg1;

@end
