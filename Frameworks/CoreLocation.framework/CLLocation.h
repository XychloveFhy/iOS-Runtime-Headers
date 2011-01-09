/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */



@interface CLLocation : NSObject <NSCopying, NSCoding>
{
    id _internal;
}

@property(readonly) NSInteger _mapkit_source;
@property(readonly) NSInteger type;
@property(readonly) NSString *iso6709Notation;
@property(readonly) double course;
@property(readonly) double speed;
@property(readonly) ? clientLocation;
@property(readonly) NSDate *timestamp;
@property(readonly) double verticalAccuracy;
@property(readonly) double horizontalAccuracy;
@property(readonly) double altitude;
@property(readonly) ? coordinate;

+ (id)_mapkit_stringWithType:(NSInteger)arg1;
+ (NSInteger)_mapkit_typeWithSource:(NSInteger)arg1;

- (struct { double x1; double x2; })coordinate;
- (double)altitude;
- (double)verticalAccuracy;
- (double)course;
- (double)horizontalAccuracy;
- (id)iso6709Notation;
- (NSInteger)type;
- (id)timestamp;
- (double)speed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)initWithClientLocation:(struct { NSInteger x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; NSInteger x9; double x10; NSInteger x11; })arg1;
- (id)initWithIso6709Notation:(id)arg1;
- (id)shortDescription;
- (struct { NSInteger x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; NSInteger x9; double x10; NSInteger x11; })clientLocation;
- (double)getDistanceFrom:(const id)arg1;
- (double)distanceFromLocation:(const id)arg1;
- (id)propagateLocationToTime:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (id)locationDescription;
- (BOOL)isEqualToLocationCoordinate:(struct { double x1; double x2; })arg1;
- (NSInteger)_mapkit_source;

@end
