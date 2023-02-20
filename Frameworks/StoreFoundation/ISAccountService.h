//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISServiceRemoteObject.h"

@class ISAuthenticationResponse, ISStoreAccount, NSDictionary, NSNumber, NSString, NSURL, NSURLRequest, NSURLResponse;

@class ISAuthenticationContext;
@class NSURLRequest;

NS_ASSUME_NONNULL_BEGIN

@protocol ISAccountService <ISServiceRemoteObject>
- (void)recommendedAppleIDForAccountSignIn:(void (^)(NSString *))arg1;
- (void)iCloudDSIDReplyBlock:(void (^)(NSString *))arg1;
- (void)setStoreFrontID:(NSString *)arg1;
- (void)storeFrontWithReplyBlock:(void (^)(NSString *))arg1;
- (void)shouldSendGUIDWithRequestForURL:(NSURL *)arg1 withReplyBlock:(void (^)(BOOL))arg2;
- (void)processURLResponse:(NSURLResponse *)arg1 forRequest:(NSURLRequest *)arg2;
- (void)httpHeadersForURL:(NSURL *)arg1 forDSID:(NSNumber *)arg2 includeADIHeaders:(BOOL)arg3 withReplyBlock:(void (^)(NSDictionary *))arg4;

// - (void)removeURLBagObserver:(id <ISURLBagObserver>)arg1;
// - (void)addURLBagObserver:(id <ISURLBagObserver>)arg1;
// - (void)dictionaryWithReplyBlock:(void (^)(NSDictionary *))arg1;
// - (void)isValidWithReplyBlock:(void (^)(BOOL))arg1;
// - (void)regexWithKey:(NSString *)arg1 matchesString:(NSString *)arg2 replyBlock:(void (^)(BOOL))arg3;
// - (void)invalidateAllBags;
// - (void)loadURLBagWithType:(unsigned long long)arg1 replyBlock:(void (^)(BOOL, BOOL, NSError *))arg2;
// - (void)needsSilentADIActionForURL:(NSURL *)arg1 withReplyBlock:(void (^)(BOOL))arg2;
// - (void)urlIsTrustedByURLBag:(NSURL *)arg1 withReplyBlock:(void (^)(BOOL))arg2;
// - (void)valueForURLBagKey:(NSString *)arg1 withReplyBlock:(void (^)(id))arg2;

- (void)getTouchIDPreferenceWithReplyBlock:(void (^)(BOOL, ISStoreAccount *, NSError *))arg1;
- (void)updateTouchIDSettingsForDSID:(NSNumber *)arg1 replyBlock:(void (^)(BOOL, NSError *))arg2;
- (void)setTouchIDState:(long long)arg1 forDSID:(NSNumber *)arg2 replyBlock:(void (^)(BOOL, NSError *))arg3;
- (void)generateTouchIDHeadersForDSID:(NSNumber *)arg1 challenge:(NSString *)arg2 caller:(id)arg3 replyBlock:(void (^)(NSDictionary *, NSError *))arg4;
- (void)retailStoreDemoModeReplyBlock:(void (^)(BOOL, NSString *, NSString *, BOOL))arg1;

// - (void)removeAccountStoreObserver:(id <ISAccountStoreObserver>)arg1;
// - (void)addAccountStoreObserver:(id <ISAccountStoreObserver>)arg1;
// - (void)parseCreditStringForProtocol:(NSDictionary *)arg1;

- (void)signOut;

// This method was removed in macOS High Sierra
// https://github.com/mas-cli/mas/issues/107
- (void)signInWithContext:(ISAuthenticationContext * __nonnull)arg1 replyBlock:(void (^ __nonnull)(BOOL, ISStoreAccount * __nullable, NSError * __nullable))arg2 NS_DEPRECATED_MAC(10_9, 10.12);

- (void)addAccount:(ISStoreAccount *)arg1;
- (void)addAccountWithAuthenticationResponse:(ISAuthenticationResponse *)arg1 makePrimary:(BOOL)arg2 replyBlock:(void (^)(ISStoreAccount *))arg3;
- (void)accountWithAppleID:(NSString *)arg1 replyBlock:(void (^)(ISStoreAccount *))arg2;
- (void)accountWithDSID:(NSNumber *)arg1 replyBlock:(void (^)(ISStoreAccount *))arg2;
- (void)primaryAccountWithReplyBlock:(void (^)(ISStoreAccount *))arg1;
- (void)authIsExpiredWithReplyBlock:(void (^)(BOOL))arg1;
@end

NS_ASSUME_NONNULL_END
