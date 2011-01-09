/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class FTRegion, NSArray, NSDictionary;



@interface FTRegion : NSObject 
{
    NSDictionary *_dictionary;
    FTRegion *_parentRegion;
    NSArray *_subRegions;
}

@property(readonly) NSString *isoCode;
@property(readonly) NSString *label;
@property(readonly) NSString *regionID;
@property(readonly) NSString *basePhoneNumber;
@property(readonly) FTRegion *parentRegion;
@property(readonly) NSArray *subRegions;


- (void)_setParentRegion:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (id)label;
- (id)description;
- (void)dealloc;
- (id)parentRegion;
- (id)regionWithID:(id)arg1;
- (id)subRegions;
- (id)basePhoneNumber;
- (id)isoCode;
- (id)regionID;
- (BOOL)isLeafNode;

@end
