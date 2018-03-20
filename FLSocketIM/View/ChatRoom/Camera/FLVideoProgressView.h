//
//  FLVideoProgressView.h
//  FLSocketIM
//
//  Created by FMD on 11/08/2017.
//  Copyright © 2017 FMD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FLVideoProgressView : UIView

@property (nonatomic, assign) NSInteger timeMax;

- (void)clearProgress;

@end
