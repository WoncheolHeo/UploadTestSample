//
//  PagesJson.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 6. 25..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PagesJson : NSObject

@property (nonatomic) long long vtTz;
@property (nonatomic) NSString* mvt1;
@property (nonatomic) NSString* mvt2;
@property (nonatomic) NSString* mvt3;
@property (nonatomic) NSString* mvt4;
@property (nonatomic) NSString* mvt5;
@property (nonatomic) NSString* mvt6;
@property (nonatomic) NSString* mvt7;
@property (nonatomic) NSString* mvt8;
@property (nonatomic) NSString* mvt9;
@property (nonatomic) NSString* mvt10;
@property (nonatomic) NSString* pg1;
@property (nonatomic) NSString* pg2;
@property (nonatomic) NSString* pg3;
@property (nonatomic) NSString* pg4;
@property (nonatomic) NSString* pnc;
@property (nonatomic) NSString* pnAtr1;
@property (nonatomic) NSString* pnAtr2;
@property (nonatomic) NSString* pnAtr3;
@property (nonatomic) NSString* pnAtr4;
@property (nonatomic) NSString* pnAtr5;
@property (nonatomic) NSString* pnAtr6;
@property (nonatomic) NSString* pnAtr7;
@property (nonatomic) NSString* pnAtr8;
@property (nonatomic) NSString* pnAtr9;
@property (nonatomic) NSString* pnAtr10;
@property (nonatomic) NSString* cp;
@property (nonatomic) NSString* scart;
@property (nonatomic) NSString* skwd;
@property (nonatomic) NSString* ckd;
@property (nonatomic) NSString* pi;
@property (nonatomic) NSNumber *sresult;

//컨텐츠
@property (nonatomic) NSString* ikwd;
@property (nonatomic) NSInteger ikwdRs;
@property (nonatomic) NSInteger ikwdRsFall;

//체류시간
@property (nonatomic) NSInteger vs;
@property (nonatomic) NSInteger pv;

//piTrace 추적값
@property (nonatomic) NSString *pID;
@property NSMutableDictionary *finalPagesJson;

@end
