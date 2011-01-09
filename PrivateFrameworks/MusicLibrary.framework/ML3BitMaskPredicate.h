/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface ML3BitMaskPredicate : ML3PropertyPredicate 
{
    long long _mask;
    long long _value;
}

@property long long value;
@property long long mask;

+ (id)predicateWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3;

- (void)setMask:(long long)arg1;
- (long long)value;
- (void)setValue:(long long)arg1;
- (long long)mask;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (void)bindToSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout NSInteger*)arg2;

@end
