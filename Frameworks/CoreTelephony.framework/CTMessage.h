/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSMutableDictionary, NSMutableArray, NSDictionary, CTPhoneNumber, NSString, NSDate, NSObject<CTMessageAddress><NSCopying>;



@interface CTMessage : NSObject 
{
    NSObject<CTMessageAddress><NSCopying> *_sender;
    NSMutableArray *_recipients;
    NSMutableArray *_items;
    NSDictionary *_rawHeaders;
    NSDate *_date;
    NSUInteger _messageId;
    NSInteger _messageType;
    CTPhoneNumber *_serviceCenter;
    NSString *_subject;
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    NSUInteger _replaceMessage;
    NSString *_countryCode;
}

@property(copy,readonly) NSString *countryCode;
@property(readonly) NSUInteger replaceMessage;
@property(copy) NSString *contentType;
@property(readonly) NSDictionary *rawHeaders;
@property(copy) NSObject<CTMessageAddress><NSCopying> *sender;
@property(copy) NSString *subject;
@property(copy) CTPhoneNumber *serviceCenter;
@property NSInteger messageType;
@property(readonly) NSArray *items;
@property NSUInteger messageId;
@property(readonly) NSDate *date;
@property(readonly) NSArray *recipients;


- (void)setRawHeaders:(id)arg1;
- (void)setReplaceMessage:(NSUInteger)arg1;
- (void)addPhoneRecipient:(id)arg1;
- (void)addEmailRecipient:(id)arg1;
- (id)addText:(id)arg1;
- (id)addData:(id)arg1 withContentType:(id)arg2;
- (id)addPart:(id)arg1;
- (id)contentTypeParameterWithName:(id)arg1;
- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)allContentTypeParameterNames;
- (void)setCountryCode:(id)arg1;
- (id)countryCode;
- (NSUInteger)replaceMessage;
- (id)rawHeaders;
- (void)setSender:(id)arg1;
- (id)serviceCenter;
- (void)setServiceCenter:(id)arg1;
- (NSInteger)messageType;
- (void)setMessageType:(NSInteger)arg1;
- (NSUInteger)messageId;
- (void)setMessageId:(NSUInteger)arg1;
- (id)initWithDate:(id)arg1;
- (id)subject;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (void)addRecipient:(id)arg1;
- (id)recipients;
- (id)sender;
- (id)items;
- (id)description;
- (id)init;
- (id)date;
- (void)dealloc;
- (void)setSubject:(id)arg1;

@end
