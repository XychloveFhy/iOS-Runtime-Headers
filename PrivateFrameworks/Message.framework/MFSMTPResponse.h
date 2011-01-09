/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */



@interface MFSMTPResponse : NSObject 
{
    id _lastResponseLine;
    NSInteger _status;
    unsigned int _statusClass : 10;
    unsigned int _statusSubject : 10;
    unsigned int _statusDetail : 10;
}

@property(readonly) NSUInteger statusDetail;
@property(readonly) NSUInteger statusSubject;
@property(readonly) NSUInteger statusClass;
@property(readonly) NSInteger status;

+ (void)initialize;

- (void)setStatus:(NSInteger)arg1;
- (void)_updateEnhancedStatusCodesFromLastResponse;
- (NSInteger)failureReason;
- (NSUInteger)statusDetail;
- (NSUInteger)statusSubject;
- (NSUInteger)statusClass;
- (id)errorMessageWithAddress:(id)arg1 defaultMessage:(id)arg2;
- (id)initWithStatus:(NSInteger)arg1;
- (void)setLastResponseLine:(id)arg1;
- (id)lastResponseLine;
- (id)description;
- (void)dealloc;
- (NSInteger)status;

@end
