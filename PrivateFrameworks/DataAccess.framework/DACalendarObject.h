/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DACalendarDatabase;



@interface DACalendarObject : NSObject 
{
    DACalendarDatabase *_database;
    void *_ref;
}

@property(readonly) void *ref;
@property(readonly) DACalendarDatabase *database;

+ (id)NSArrayFromCFArray:(struct __CFArray { }*)arg1 objectClass:(Class)arg2 database:(id)arg3;

- (void)dealloc;
- (id)database;
- (id)initWithDatabase:(id)arg1 ref:(void*)arg2;
- (void*)ref;

@end
