/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFMessageDataConsumerFactory>, NSMutableData, <MFCollectingDataConsumer>;



@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer>
{
    NSInteger _requestedFormat;
    <MFCollectingDataConsumer> *_dataConsumer;
    <MFCollectingDataConsumer> *_alternatePartConsumer;
    <MFMessageDataConsumerFactory> *_consumerFactory;
    BOOL _triedCreatingAlternatePartConsumer;
    BOOL _succeeded;
    NSMutableData *_bodyData;
    double _timeOfLastActivity;
}

@property(readonly) double timeOfLastActivity;
@property NSInteger requestedFormat;
@property(retain) <MFMessageDataConsumerFactory> *consumerFactory;
@property(retain,readonly) NSMutableData *bodyData;
@property(retain) <MFCollectingDataConsumer> *alternatePartConsumer;
@property(retain) <MFCollectingDataConsumer> *dataConsumer;


- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(NSInteger)arg2;
- (void)consumeData:(char *)arg1 length:(NSInteger)arg2 format:(NSInteger)arg3 mailMessage:(id)arg4;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (NSInteger)requestedFormat;
- (id)consumerFactory;
- (id)alternatePartConsumer;
- (void)setAlternatePartConsumer:(id)arg1;
- (id)dataConsumer;
- (double)timeOfLastActivity;
- (void)setRequestedFormat:(NSInteger)arg1;
- (void)setDataConsumer:(id)arg1;
- (void)setConsumerFactory:(id)arg1;
- (id)dataConsumerForPart:(id)arg1;
- (BOOL)succeeded;
- (id)bodyData;
- (id)data;
- (void)dealloc;

@end
