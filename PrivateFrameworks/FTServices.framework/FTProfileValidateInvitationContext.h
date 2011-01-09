/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString, NSDictionary;



@interface FTProfileValidateInvitationContext : FTProfileMessage 
{
    NSString *_regionID;
    NSString *_basePhoneNumber;
    NSString *_responseRegionID;
    NSString *_responseBasePhoneNumber;
    NSDictionary *_responseExtraInfo;
}

@property(copy) NSDictionary *responseExtraInfo;
@property(copy) NSString *responseRegionID;
@property(copy) NSString *responseBasePhoneNumber;
@property(copy) NSString *regionID;
@property(copy) NSString *basePhoneNumber;


- (void)setRegionID:(id)arg1;
- (void)setBasePhoneNumber:(id)arg1;
- (id)responseExtraInfo;
- (void)setResponseExtraInfo:(id)arg1;
- (id)responseRegionID;
- (void)setResponseRegionID:(id)arg1;
- (id)responseBasePhoneNumber;
- (void)setResponseBasePhoneNumber:(id)arg1;
- (id)requiredKeys;
- (void)handleResponseDictionary:(id)arg1;
- (void)dealloc;
- (id)messageBody;
- (id)basePhoneNumber;
- (id)regionID;
- (id)bagKey;

@end
