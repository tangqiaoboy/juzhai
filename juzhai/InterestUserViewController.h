//
//  InterestUserViewController.h
//  juzhai
//
//  Created by JiaJun Wu on 12-6-30.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGORefreshHeaderViewController.h"

@class JZData;
@class ListHttpRequestDelegate;

#define INTEREST_USER_LOGO_TAG 1
#define INTEREST_USER_NICKNAME_TAG 2
#define INTEREST_USER_INFO_TAG 3

@interface InterestUserViewController : EGORefreshHeaderViewController <UITableViewDelegate, UITableViewDataSource>
{
    JZData *_data;
    ListHttpRequestDelegate *_listHttpRequestDelegate;
    NSMutableDictionary *_logoDictionary;
}

@property (nonatomic) BOOL isInterest;
@end
