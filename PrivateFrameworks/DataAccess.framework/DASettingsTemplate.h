/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString, NSArray;



@interface DASettingsTemplate : NSObject 
{
    NSString *_name;
    NSInteger _order;
    NSString *_primaryDomain;
    NSArray *_domainAliasPatterns;
    NSString *_primaryUsernameDomain;
    NSInteger _httpPort;
    NSInteger _httpsPort;
    NSInteger _port;
    NSString *_pathFormat;
    BOOL _isDefaultTemplate;
    BOOL _defaultUseSSL;
}

@property(readonly) NSInteger defaultPort;
@property(readonly) NSString *defaultScheme;
@property BOOL defaultUseSSL;
@property BOOL isDefaultTemplate;
@property(retain) NSString *pathFormat;
@property NSInteger httpsPort;
@property NSInteger httpPort;
@property(retain) NSString *primaryUsernameDomain;
@property(retain) NSArray *domainAliasPatterns;
@property(retain) NSString *primaryDomain;
@property NSInteger order;
@property(retain) NSString *name;

+ (BOOL)requiresPathFormat;
+ (BOOL)requiresPorts;
+ (BOOL)_isValidPort:(NSInteger)arg1;
+ (id)templateWithDomain:(id)arg1;
+ (id)knownTemplates;
+ (id)defaultTemplate;

- (NSInteger)order;
- (void)setOrder:(NSInteger)arg1;
- (NSInteger)compare:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (void)dealloc;
- (id)defaultScheme;
- (NSInteger)defaultPort;
- (BOOL)_isDomainInAliases:(id)arg1;
- (void)initAccount:(id)arg1;
- (void)setDomain:(id)arg1 forAccount:(id)arg2;
- (void)setUsername:(id)arg1 forAccount:(id)arg2;
- (void)setUseSSL:(BOOL)arg1 forAccount:(id)arg2;
- (void)setPort:(NSInteger)arg1 forAccount:(id)arg2;
- (void)setURL:(id)arg1 forAccount:(id)arg2;
- (void)setPrincipalURLForAccount:(id)arg1 toURL:(id)arg2;
- (void)_setPrincipalURLForAccount:(id)arg1;
- (void)_appendPrimarySuffixToUsernameIfNeeded:(id)arg1;
- (id)descriptionForAccount:(id)arg1;
- (BOOL)_isPrincipalPathCustomForAccount:(id)arg1;
- (id)_principalPathForAccount:(id)arg1;
- (BOOL)defaultUseSSL;
- (void)setDefaultUseSSL:(BOOL)arg1;
- (BOOL)isDefaultTemplate;
- (void)setIsDefaultTemplate:(BOOL)arg1;
- (id)pathFormat;
- (void)setPathFormat:(id)arg1;
- (NSInteger)httpsPort;
- (void)setHttpsPort:(NSInteger)arg1;
- (NSInteger)httpPort;
- (void)setHttpPort:(NSInteger)arg1;
- (id)primaryUsernameDomain;
- (void)setPrimaryUsernameDomain:(id)arg1;
- (id)domainAliasPatterns;
- (void)setDomainAliasPatterns:(id)arg1;
- (id)primaryDomain;
- (id)_initWithName:(id)arg1 plist:(id)arg2;
- (void)setPrimaryDomain:(id)arg1;

@end
