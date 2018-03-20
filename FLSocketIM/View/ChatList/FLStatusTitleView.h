//
//  FLStatusTitleView.h
//  FLSocketIM
//
//  Created by FMD on 2017/7/26.
//  Copyright © 2017年 FMD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FLStatusTitleView : UIView

- (void)updateWithLinkStatus:(SocketIOClientStatus)status;

@end
