/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;



@interface CTCarrier : NSObject 
{
    NSString *_carrierName;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSString *_isoCountryCode;
    BOOL _allowsVOIP;
}

@property BOOL allowsVOIP;
@property(retain) NSString *isoCountryCode;
@property(retain) NSString *mobileNetworkCode;
@property(retain) NSString *mobileCountryCode;
@property(retain) NSString *carrierName;


- (BOOL)allowsVOIP;
- (void)setAllowsVOIP:(BOOL)arg1;
- (id)isoCountryCode;
- (void)setIsoCountryCode:(id)arg1;
- (id)mobileNetworkCode;
- (void)setMobileNetworkCode:(id)arg1;
- (id)mobileCountryCode;
- (void)setMobileCountryCode:(id)arg1;
- (id)carrierName;
- (void)setCarrierName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end
