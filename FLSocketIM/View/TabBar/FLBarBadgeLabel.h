//
//  FLBarBadgeLabel.h
//  FLSocketIM
//
//  Created by FMD on 2017/7/25.
//  Copyright © 2017年 FMD. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^clearBadgeCompletion)();
@interface FLBarBadgeLabel : UILabel

@property (nonatomic, copy) clearBadgeCompletion clearCompletion;

@end
