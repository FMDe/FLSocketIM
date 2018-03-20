//
//  NSData+FLCommon.m
//  FLSocketIM
//
//  Created by FMD on 25/08/2017.
//  Copyright © 2017 FMD. All rights reserved.
//

#import "NSData+FLCommon.h"

@implementation NSData (FLCommon)

- (BOOL)saveToLocalPath:(NSString *)locPath {
    NSFileManager *fileManager = [NSFileManager defaultManager];
    BOOL saveSuccess = [fileManager createFileAtPath:locPath contents:self attributes:nil];
    if (saveSuccess) {
        FLLog(@"文件保存成功");
    }
    return saveSuccess;
}

@end
