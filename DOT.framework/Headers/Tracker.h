//
//  Tracker.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 7. 5..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import "Conversion.h"
#import "RevenueJson.h"
#import "Purchase.h"
#import "Click.h"
#import "Page.h"
#import "SessionJson.h"
#import "ClickJson.h"
#import "RevenueJson.h"
#import "GoalJson.h"
#import "PagesJson.h"

@interface Tracker : NSObject
@property (nonatomic) GoalJson *goalJson;
@property (nonatomic) RevenueJson *revenueJson;
@property (nonatomic) ClickJson *clickJson;
@property (nonatomic) PagesJson *pagesJson;

+ (Tracker *)sharedInstance;
+ (void)applicationKey:(NSString *)_applicationKey;
+ (NSString *)appKey;
+ (void)setAppKey:(NSString *)newValue;
- (void)initEnd;
- (void)startPage;
- (double)endPage;
- (BOOL)sendTransaction;
- (BOOL)checkPurchase;
- (void)updateBeforePurchase;
- (void)updateAfterPurchase;

- (void)saveUserLoginInfo;

- (void)setGoalJosnWithConversion:(Conversion *)conversion;
- (void)setRevenueJsonWithPurchase:(Purchase *)purchase;
- (void)setClickJsonWithClick:(Click *)click;
- (void)setPagesJsonWithPage:(Page *)page;

- (void)enterForeground;
- (void)enterBackground;

- (void)parseDeepLink:(NSString *)deepLink;
- (void)parseReferrer:(NSString *)referrer;

//Notification Info
- (void)setPushId:(NSString *)pushId;
- (void)saveDeviceToken:(NSString *)deviceToken;
- (void)setPushTitle:(NSString *)pushTitle;
- (void)setPushClickTime:(long long)pushCkTime;
- (void)setPushPeriod:(NSInteger)pushPeriod;
- (void)setPushClick:(NSDictionary *)userInfo;

//WebTracker 호출함수
- (BOOL)getDOTInitFlag;
- (BOOL)checkNewSession;
- (void)occurNewSessionWithType:(NSInteger)type;
- (void)createSessionJson;
- (void)createRevenueJson;
- (void)createPagesJson;
- (void)createEntireJson;
- (void)createEntireJson2;
- (void)setPairingDataWithDictionary:(NSDictionary *)pairingJsonDict;

@end







