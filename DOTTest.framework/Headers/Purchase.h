//
//  Purchase.h
//  DOT
//
//  Created by Woncheol Heo on 2018. 6. 28..
//  Copyright © 2018년 wisetracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Product.h"
#import "CustomValue.h"

@interface Purchase : NSObject

@property (nonatomic) NSMutableArray <Product *> *orderProductList;
@property (nonatomic) Product *orderProduct;
@property (nonatomic) CustomValue *customValue;
@property (nonatomic) NSString *orderNo;
@property (nonatomic) NSString *keywordCategory;
@property (nonatomic) NSString *keyword;
@property (nonatomic) NSString *currencyh;
@property (nonatomic) NSString *useLatestIkwd;
@property (nonatomic) NSString *useLatestMvt1;
@property (nonatomic) NSString *useLatestMvt2;
@property (nonatomic) NSString *useLatestMvt3;
@property (nonatomic) NSString *useLatestMvt4;
@property (nonatomic) NSString *useLatestMvt5;
@property (nonatomic) NSString *useLatestMvt6;
@property (nonatomic) NSString *useLatestMvt7;
@property (nonatomic) NSString *useLatestMvt8;
@property (nonatomic) NSString *useLatestMvt9;
@property (nonatomic) NSString *useLatestMvt10;
@property (nonatomic) NSMutableArray <NSMutableDictionary *> *productDicList;

- (void)useLatestSearchKeyword;
- (void)useLatestCustomValue1;
- (void)useLatestCustomValue2;
- (void)useLatestCustomValue3;
- (void)useLatestCustomValue4;
- (void)useLatestCustomValue5;
- (void)useLatestCustomValue6;
- (void)useLatestCustomValue7;
- (void)useLatestCustomValue8;
- (void)useLatestCustomValue9;
- (void)useLatestCustomValue10;
@end

