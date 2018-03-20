//
//  FLChatViewController.h
//  FLSocketIM
//
//  Created by FMD on 2017/7/6.
//  Copyright © 2017年 FMD. All rights reserved.
//

#import "FLViewController.h"

@interface FLChatViewController : FLViewController

@property (nonatomic, copy) NSString *toUser;
- (instancetype)initWithToUser:(NSString *)toUser;

- (CGRect)getImageRectInWindowAtIndex:(NSInteger)index;

@end
